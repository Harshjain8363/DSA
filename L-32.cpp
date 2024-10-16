/*
#include<iostream>
using namespace std;

void reachhome(int src, int dest){

    cout<<"Source : "<<src<< " Destination : "<<dest<<endl;
    if(src==dest){
        cout<<"Pahuch gaya"<<endl;
        return ;
    }

    src++;

    reachhome(src,dest);
}

int main(){

    int dest= 10;
    int src = 1;

    reachhome(src,dest);
    return 0;
}*/







/*
#include<iostream>
using namespace std;

void printfibo(int n,int a,int b,int fib){

    fib = a+b;

    if(fib>n){
        return;
    }

    cout<<fib<<" ";
    a = b;
    b = fib;

    printfibo(n,a,b,fib);
   
}

int main(){

    int fib = 0;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    printfibo(1000,a,b,fib);
}*/






#include<iostream>
using namespace std;

int num = 0;

void saydigit(int n, string arr[]){

    if(n==0){
        return;
    }
    
    int digit = n%10;
    n = n/10;

    
    saydigit(n,arr);
    cout<< arr[digit]<<" ";
}

int main(){
    
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    saydigit(n,arr);
}