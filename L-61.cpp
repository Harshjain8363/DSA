#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }    
};

Node* buildtree(Node* root){

    int data;
    cout<<"Enter the data :"<<endl;
    cin>>data;

    root = new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for left node of "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the data for right node of "<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void levelordertraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp=q.front();
        q.pop();

        if (temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root){

    //base case
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){

    //base case
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){

    //base case
    if(root==NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildlevelorder(Node* &root){

    queue<Node*> d;
    cout<<"Enter root's data : "<<endl;
    int data;
    cin>>data; 
    root=new Node(data);
    d.push(root);

    while(!d.empty()){

        Node* temp=d.front();
        d.pop();
        cout<<"Enter data for left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left = new Node(leftdata);
            d.push(temp->left);
        }

        cout<<"Enter data for right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right = new Node(rightdata);
            d.push(temp->right);
        }
    }

}

int main(){

    Node* root=NULL;
    if(root==NULL){
        cout<<root->data<<endl;
    }

    
    //buildlevelorder(root);
   // levelordertraversal(root);
    
    
    /*
    root=buildtree(root);
    levelordertraversal(root);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);*/

    // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1 

}