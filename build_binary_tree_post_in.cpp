#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int  val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
int search(int inorder[], int start, int end, int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
node* buildtree(int postorder[],int inorder[],int start, int end)
{
    static int  idx=end;
    if(start>end)
    {
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    node* Node =new node(curr);
    if(start==end)
    {
        return Node;
    }
    int pos=search(inorder,start,end , curr);
    Node->right=buildtree(postorder,inorder,pos+1,end);
    Node->left=buildtree(postorder,inorder,start,pos-1);
    return Node;
}
void inorderprint(struct node* root)
{
    if(root==NULL)
    return;

    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node*root=buildtree(postorder, inorder ,0,4);
    inorderprint(root);

}