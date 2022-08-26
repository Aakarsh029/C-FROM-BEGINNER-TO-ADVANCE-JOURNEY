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
void preorderoutput(struct node* root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorderoutput(root->left);
    preorderoutput(root->right);
}
node* constructbst(int preorder[],int* preorderidx,int key,int min,int max,int n)
{
    if(*preorderidx>= n)
    {
        return NULL;
    }   
    node* root= NULL;
    if(key > min && key < max)
    {
        root = new node(key);
        *preorderidx = *preorderidx + 1;
    
        if(*preorderidx < n)
        {
            root->left = constructbst(preorder,preorderidx,preorder[*preorderidx],min,key,n);
            root->right = constructbst(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }    
        
    }
    return root;
}
int main()
{
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderidx=0;
    node* root=constructbst(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
    preorderoutput(root);
    return 0;
}