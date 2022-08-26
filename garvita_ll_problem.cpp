#include<iostream>
using namespace std;

class Linked_List
{
    public:
    int data=0;
    Linked_List *next;
    Linked_List(int val )
    { 
      data=val;
      next=NULL;
    }

};

void insert_first(Linked_List* head ,int num)
{
    
    Linked_List *p=new Linked_List(num);
    p->next=head;
    head=p;
}

void insert_last(Linked_List* head,int num)
{
    Linked_List *p=new Linked_List(num);
    Linked_List *ptr= head;
    
    if(head==NULL)
    {
        head=p;
        return;
    }
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=p;
    return;
}

/*void append(Linked_List** head_ref, int new_data)
{
    Linked_List* new_node = new Linked_List(new_data);
    Linked_List *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next; 
    }
    last->next = new_node;
    return;
}*/

void traversal(Linked_List* head)
{
    Linked_List *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    Linked_List* head=NULL ;
    insert_first(head,345);
    insert_first(head,547);
    insert_first(head,313);
    insert_first(head,765);
    insert_first(head,780);
    insert_first(head,453);
    // append(&head,64);
    // append(&head,56);
    // append(&head,35);
    // append(&head,78);
    // insert_last(head,23);
    // insert_last(head,67);
    // insert_last(head,34);
    // insert_last(head,23);
    // insert_last(head,12);
    traversal(head);
    return(0);
}