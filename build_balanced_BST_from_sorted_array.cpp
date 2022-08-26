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
node* sortedarraytobst(int arr[],int start, int end)
{
    if(start>end)
    return NULL; 

    int mid=(start+end)/2;
    node* root=new node(arr[mid]);

    root->left=sortedarraytobst(arr,start,mid-1);
    root->right=sortedarraytobst(arr,mid+1,end);
    return root;
}
void preorderoutput(struct node* root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorderoutput(root->left);
    preorderoutput(root->right);
}
int main()
{
    int a[]={10,20,30,40,50};
    node* root=sortedarraytobst(a,0,4);
    preorderoutput(root);
    cout<<endl;
    return 0;
}