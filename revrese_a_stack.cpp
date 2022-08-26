#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &st,int element)
{   
    if(st.empty())
    {
        st.push(element);
        return;
    }
    int topele=st.top();
    st.pop();
    insertatbottom(st,element);
    st.push(topele);

}
void reverse(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int element=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,element);
} 
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}
