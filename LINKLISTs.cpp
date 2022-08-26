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
int length(node* &head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k)
{
    node* newhead;
    node* newtail;
    node* tail=head;
    int l =length(head);
    int count =1;
    k=k%l;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;
        }
        if(count==l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
node* reverse(node* &head)
{
    node* prvptr=NULL;
    node* currentptr=head;
    node* nxtptr;
    while(currentptr !=NULL)
    {
        nxtptr=currentptr->next;
        currentptr->next=prvptr;
        prvptr=currentptr;
        currentptr=nxtptr;
    }
    return prvptr;
}
node* reversek(node* &head,int k)
{
    node* prvptr=NULL;
    node* currentptr=head;
    node* nxtptr;
    int count=0;
    while(currentptr !=NULL && count<k)
    {
        nxtptr=currentptr->next;
        currentptr->next=prvptr;
        prvptr=currentptr;
        currentptr=nxtptr;
        count++;
    }
    if (nxtptr!=NULL)
    {
        head->next=reversek(nxtptr,k);
    }
    return prvptr;
}
void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode;
    int count = 1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool detectcycle(node* &head)
{
    node*slow=head;
    node*fast=head;
    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;  
        }
    }
    return false;
}
void removecycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast= head;
    while(slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main()
{
    node*head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);

    /*display(head);
    deleteathead(head);
    display(head);
    deletion(head,3);
    display(head);
    node*newhead=reverse(head);
    display(newhead);
    node*newhead2=reversek(head,2);
    display(newhead2);
    makecycle(head,3);
    int z=detectcycle(head);
    cout<<z<<endl;*/
    display(head);
    node* newhead3 = kappend(head,3);
    display(newhead3);
    return 0;
}