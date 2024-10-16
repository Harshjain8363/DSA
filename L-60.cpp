#include<iostream>
#include<queue>
using namespace std;

int main(){

    
    queue<int> q;
    q.push(12);
    q.push(15);
    q.push(20);
    cout<<"Size : "<<q.size()<<endl;
    q.pop();
    cout<<"Size : "<<q.size()<<endl;
    int front = q.front();
    cout<<"Front element : "<<front<<endl;
    cout<<q[0]<<endl;


    /*
    deque<int> d;
    d.push_back(12);
    d.push_front(15);
    d.push_back(20);
    cout<<"Front :"<<d.front()<<endl;
    
    d.pop_back();
    d.pop_front();

    cout<<"Front :"<<d.front()<<endl;*/
    
}
