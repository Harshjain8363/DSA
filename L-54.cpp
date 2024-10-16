#include<iostream>
#include<stack>
using namespace std;

class Stack{

    //properties
    public:
    int top;
    int *arr;
    int size;

    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int element){
        if(top<size-1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    /*
    //creating a stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    cout<<"Top element is : "<<s.top()<<endl;

    //pop operation
    //s.pop();
    //s.pop();

    //cout<<"Top element is : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty !"<<endl;
    }
    else{
        cout<<"Stack is not empty !"<<endl;
    }

    cout<<"The size of the stack is : "<<s.size()<<endl;*/





    Stack s(5);
    s.push(22);
    s.push(12);
    s.push(20);

    cout<<"peek element is "<<s.peek()<<endl;
    s.pop();
    cout<<"peek element is "<<s.peek()<<endl;

    cout<<s.isempty()<<endl;

}