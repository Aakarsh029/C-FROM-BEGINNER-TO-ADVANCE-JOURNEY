#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;

    node(int  val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(struct node* root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct node* root)
{
    if(root==NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node* insertbst(node* root,int val)
{
    if(root==NULL)
    return new node(val);

    if(val<root->data)
    {
        root->left=insertbst(root->left,val);
    }
    else
    {
        root->right=insertbst(root->right,val);
    }
    return root;
}
node* searchinbst(node* root,int val)
{
    if(root==NULL)
    return NULL;
    if(root->data==val)
    return root;

    if(val<root->data)
    {
        return searchinbst(root->left,val);
    }
    else
    {
        return searchinbst(root->right,val);
    }
}
node* inordersuccessor(node*root)
{
    node* curr = root;
    while(curr && curr->left !=NULL)
    {
        curr=curr->left;

    }
    return curr;

}
node* deleteinbst(node* root,int val)
{

    if(val<root->data)
    {
        root->left=deleteinbst(root->left,val);
    }
    else
    if(val>root->data)
    {
        root->right=deleteinbst(root->right,val);
    }
    else
    {
        if(root->left==NULL)
        {
            node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL)
        {
            node* temp=root->left;
            free(root);
            return temp;
        }
    // case 3
    node* temp=inordersuccessor(root->right);
    root->data=temp->data;
    root->right=deleteinbst(root->right,temp->data);
    }
    return(root);
}
int main()
{
    node* root=NULL;
    root=insertbst(root,5);
    insertbst(root,1);
    insertbst(root,3);
    insertbst(root,4);
    insertbst(root,2);
    insertbst(root,7);
    insertbst(root,8);
    insertbst(root,9);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    if(searchinbst(root,7)==NULL)
    cout<<"key doesnt exist"<<endl;
    else
    cout<<"key exists"<<endl;
    root=deleteinbst(root,2);
    inorder(root);
}