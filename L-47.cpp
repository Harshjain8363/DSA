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

bool detectloop(Node* head){
    if(head==NULL){
        return false;
    }
    map <Node*,bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"loop is present for element "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
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

Node* floydloopdetection(Node* &head){

    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast -> next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow = slow->next;
        if(fast==slow){
           // cout<<"Loop is present for data "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* startingnode(Node* &head){

    if(head==NULL){
        return NULL;
    }

    Node* intersection = floydloopdetection(head);
    Node* slow = head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void loopremoval(Node* &head){

    if(head==NULL){
        return ;
    }
    Node* startloop = startingnode(head);
    Node* temp = floydloopdetection(head);
    while(temp->next!=startloop){
        temp=temp->next;
    }
    temp->next = NULL;
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
    tail->next = head->next;
    //print(head);

    //cout<<"Head "<<head -> data <<endl;
   //cout<<"Tail "<<tail -> data <<endl;

  //  deletenode(head,4,tail);
  //  print(head);
  //  cout<<"Head "<<head -> data<<endl;
  //  cout<<"Tail "<<tail -> data<<endl;



    
    if (floydloopdetection(head)!=NULL){
        cout<<"Loop is present !"<<endl;
    }
    else{
        cout<<"Loop is not present !"<<endl;
    }



    cout<<"Starting node value is "<<startingnode(head)->data<<endl;

    loopremoval(head);

    if (floydloopdetection(head)!=NULL){
        cout<<"Loop is present !"<<endl;
    }
    else{
        cout<<"Loop is not present !"<<endl;
    }
    
}





