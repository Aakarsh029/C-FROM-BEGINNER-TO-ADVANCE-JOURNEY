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
node* merge(node* &head1,node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next; 
}
node* mergerecursive(node* &head1,node* &head2)
{
    if(head1==NULL)
    return head2;
    if(head2==NULL)
    return head1;
    node* result;
    if(head1->data<head2->data)
    {
        result=head1;
        result->next=mergerecursive(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=mergerecursive(head1,head2->next);
    }
    return result;
}
int intersection(node* &head1,node* &head2)
{
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node*ptr1;
    node*ptr2;
    if(l1==l2)
    {
        ptr1=head1;
        ptr2=head2;
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1==ptr2)
            {
                return ptr1->data;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }

    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    if(l2>l1)
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        return -1;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
void intersect(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
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
void displayeo(node* &head)
{
    node* odd = head;
    node* even=head->next;
    node* evenstart =  even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;
    if(odd->next != NULL)
    {
        even->next = NULL;
    }
}
int main()
{
    node*head = NULL;
    node*head2 = NULL;
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
    /*display(head);
    node* newhead3 = kappend(head,3);
    display(newhead3);*/
    display(head);
    //insertattail(head2,8);
    //insertattail(head2,9);
    //display(head2);
    //intersect(head,head2,3);
    //display(head2);
    //cout<<intersection(head,head2)<<endl;

    //node* newhead4=mergerecursive(head,head2);
    //node* newhead5=merge(head,head2);

    //display(newhead4);
    //display(newhead5);
    displayeo(head);
    display(head);
    return 0;
}