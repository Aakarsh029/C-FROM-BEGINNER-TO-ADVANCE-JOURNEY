#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*  next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head ,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node* &head ,int val)
{
    node*n = new node(val);
    n->next = head;
    head = n;
}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
node* merge(node* &n1,node* &n2, int size)
{
    int i=0;
     node* n3=NULL;
      
    while(i<size && (n1!=NULL && n2!=NULL))
    {
        
       if(n1->data < n2->data)
      {
          insertattail(n3,n1->data);
          n1=n1->next;
        
      }
      else
      {
          insertattail(n3,n2->data);
          n2=n2->next;
      
      }  
      i++;
    }
  while(n1!=NULL)
    {
      insertattail(n3,n1->data);
      n1=n1->next;
    }
  while(n2!=NULL)
    {
      insertattail(n3,n2->data);
      n2=n2->next;
    }
  return n3;

  
}
int main()
{
    node* n1=NULL;
    node* n2=NULL;  
    int m1,m2;
  cout<<"enter no of elements in first link list"<<endl;
  cin>>m1;
  int a[m1];
  for(int i=0;i<m1;i++)
    {
      cin>>a[i];
      insertattail(n1,a[i]);
    }
    display(n1);
  cout<<"enter no of elements in second link list"<<endl;
  cin>>m2;
  int b[m2];
  for(int i=0;i<m2;i++)
    {
      cin>>b[i];
      insertattail(n2,b[i]);
    }
    display(n2);
  cout<<"your merged link list="<<endl;
    node* n3=merge(n1,n2,m1+m2);
    display(n3);
    
}