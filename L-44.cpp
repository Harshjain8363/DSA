//singly linked list
#include<iostream>
#include<map>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"The memory is free for the node with data "<<value<<endl;
    }
};

void insertathead(Node* &head, int d ){

    Node* node2 = new Node(d);
    node2 -> next = head;
    head = node2; 
}

void insertattail(Node* &tail, int d){

    Node *node2 = new Node(d);
    tail -> next = node2;
    tail = tail -> next; 
}

void insertatmiddle(Node* &head,Node* &tail,int position, int d){

    //if insertion is in first position
    if(position == 1){
        insertathead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < (position-1)){
        temp = temp -> next;
        cnt++;
    }
    
    //if insertion is in last position
    if(temp -> next == NULL){
        insertattail(tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next ;
    temp -> next = nodetoinsert;
}



void deletenode(Node* &head,int position,Node* &tail){

    if(position == 1){
        //if deletion of the first element
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //if deletion of the middle or last element
        int cnt = 1;
        Node* curr = head;
        Node* prev = NULL;

        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next == NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }cout<<endl;
}

int main(){

    // new node created named node1
    Node* node1 = new Node(10);
    //cout<< node1->data <<endl;
    //cout<< node1->next <<endl;

    //node1 declared as head
    Node* head = node1;
    Node* tail = node1;

    //print(head);

    insertattail(tail,15);
   // print(head);

    insertattail(tail,18);
   // print(head);

    insertatmiddle(head,tail,4,20);
  //  print(head);

   // cout<<"Head "<<head -> data <<endl;
  //  cout<<"Tail "<<tail -> data <<endl;

  //  deletenode(head,4,tail);
  //  print(head);
  //  cout<<"Head "<<head -> data<<endl;
  //  cout<<"Tail "<<tail -> data<<endl;

   
}








/*
// Doubly Linked List
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //Destructor
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for the node with data "<<val<<endl;
    }
};

void insertathead(Node* &head,int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void inserattail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertatposition(Node* &head,Node* &tail,int position,int d){

    //insert at begining
    if(position==1){
        insertathead(head,d);
        return;
    }

    int cnt = 1;
    Node* temp = head;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //insert at last
    if(temp -> next == NULL){
        inserattail(tail,d);
        return;
    }

    //insert at middle
    Node* node2 = new Node(d);
    node2 -> next = temp -> next;
    node2 -> next -> prev = node2;
    temp -> next = node2;
    node2 -> prev = temp; 
}

void print(Node* &head){

    Node* temp = head;
    while( temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp ->next;
    } 
    cout<<endl;
}

void  deletionatposition(Node* &head,int position,Node* &tail){

    if(position==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deletion from middle or last
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        } 

        prev -> next = curr -> next;
        if(curr -> next == NULL){
            tail = curr -> prev;
        }
        curr -> prev = NULL;
        curr -> next = NULL;
        delete curr;
        
    }
}

int getlength(Node* &head){

    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

   // print(head);
    //cout<< getlength(head)<<endl;

    insertathead(head,5);
    print(head);

    inserattail(tail,20);
    print(head);

    insertatposition(head,tail,3,18);
    print(head);

    cout<<"Head "<< head -> data <<endl;
    cout<<"Tail "<< tail -> data <<endl; 

    cout<<endl;

    deletionatposition(head,4,tail);
    print(head);
    cout<<"Head "<< head -> data <<endl;
    cout<<"Tail "<< tail -> data <<endl; 
}*/







/*
//Circular Linked List
#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for the node with data "<<val<<endl;
    }
};

void insertnode(Node* &tail,int element,int d){

    if(tail == NULL){
        //Empty List
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        //Non empty list
        //assuming that element is already present in the list

        Node* curr = tail; 
        while(curr -> data != element){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deletenode(Node* &tail,int value){

    if(tail == NULL){
        //Empty list
        cout<<"List is empty, please check again."<<endl;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        if(curr == prev){
            tail = NULL;
        }
        else if(curr == tail){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &tail){

    if(tail==NULL){
        cout<<"List is empty."<<endl;
    }

    Node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp = temp -> next;
    }while(temp != tail);
    cout<<endl;
}

int main(){

    Node* tail = NULL;
    insertnode(tail,5,2);
    print(tail);

    insertnode(tail,2,5);
    print(tail);

    insertnode(tail,5,10);
    print(tail);

    insertnode(tail,5,7);
    print(tail);

    insertnode(tail,10,15);
    print(tail);

    deletenode(tail,7);
    print(tail);

    deletenode(tail,15);
    print(tail);

    deletenode(tail,2);
    print(tail);               

    deletenode(tail,2);
    print(tail);
}*/