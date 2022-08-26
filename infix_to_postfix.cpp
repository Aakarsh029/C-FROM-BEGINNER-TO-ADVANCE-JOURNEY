#include <iostream>
#include <string>
#define DEFAULT_SIZE 100

using namespace std;

class Stack{

private:
    char *array;
    int tos, capacity;

public:
    //constructors
    Stack();

    //Destructor
    ~Stack();

    //Methods
    void push(char a);
    char pop();
    char top();
    int get_size();
    bool is_empty();
    bool is_full();
    void display();    

};

Stack::Stack(){
    array = new char[DEFAULT_SIZE];
    tos = 0;
    capacity = DEFAULT_SIZE;
}

Stack::~Stack(){
    delete[] array;
}

void Stack::push(char a){
    if(!is_full())
        array[tos++] = a;
}

char Stack::pop(){
        return array[--tos];
}

char Stack::top(){
    return array[tos];
}

int Stack::get_size(){
    return tos; 
}

bool Stack::is_empty(){
    if(tos == 0)
        return true;
    else
        return false;
}

bool Stack::is_full(){
    if(tos == capacity)
        return true;
    else
        return false;
}

void Stack::display(){
    if (tos == 0)
        cout<<"The stack is empty"<<endl;
    else{
        for (int i=0; i<tos;i++)
                cout<<array[i]<<" ";
        cout<<endl;        
    }
}

int isp(char a){
    if(a == '^'){
        return 3;
    }
    else if (a == '*' or a == '/'){
        return 2;
    }
    else if(a == '+' or a == '-'){
        return 1;
    }
    else if(a == '('){
        return 0;
    }
    else
        return -1;
}

int icp(char a){
    if(a == '^'){
        return 4;
    }
    else if (a == '*' or a == '/'){
        return 2;
    }
    else if(a == '+' or a == '-'){
        return 1;
    }
    else if(a == '('){
        return 4;
    }
}



int main(){
    string infix, postfix;
    Stack stack1;

    cout << "This is a Infix to Postfix Expression converter." << endl;
    cout << "Enter your Infix Expression: ";
    cin >> infix;
    stack1.push('#');

    for(int i=0;i<infix.length();i++){
        if(isdigit(infix[i]) or isalpha(infix[i])){
            postfix += infix[i];
        }
        else if(infix[i] == '+' or infix[i] == '-' or infix[i] == '*' or infix[i] == '/' or infix[i] == '^'){
            while(isp(stack1.top()) >= icp(infix[i])){
                postfix += stack1.pop();
            }
            if(isp(stack1.top()) < icp(infix[i])){
                stack1.push(infix[i]);      
            }
        }
    }
    cout << postfix;


    return 0;
}