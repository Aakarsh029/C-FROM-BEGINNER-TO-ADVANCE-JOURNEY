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
void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* & head , int val)
{
    if(head==NULL)
    return;
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node*temp = head;
    while(temp->next->data != val)
    {
        temp=temp->next;

    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    
}
node* middle(node* &head)
{
    node*slow=head;
    node*fast=head;
    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}
node* reversek(node* &head)
{
    node* prvptr=NULL;
    node* currentptr=head;
    node* nxtptr;
    int count=0;
    while(currentptr !=NULL )
    {
        nxtptr=currentptr->next;
        currentptr->next=prvptr;
        prvptr=currentptr;
        currentptr=nxtptr;
        count++;
    }
    if (nxtptr!=NULL)
    {
        head->next=reversek(nxtptr);
    }
    return prvptr;
}
bool palindrome(node* &head)
{
    if(head==NULL)
    return true;
    node* mid=middle(head);
    node*last= reversek(mid->next);
    node*cur= head ;
    while(last!=NULL)
    {
        if(last->data!=cur->data)
        return false;
        last=last->next;
        cur=cur->next;
    }
    return true;
}
int main()
{
    node*head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,3);
    insertattail(head,2);
    insertattail(head,1);
    display(head);
    bool z=palindrome(head);
    cout<<"your link list="<<z<<endl;
    display(head);
    /*deleteathead(head);
    display(head);
    deletion(head,3);
    display(head);*/
    
}