/*
#include<iostream>
using namespace std;

int getpivot(int arr[],int n){

    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){

    int arr[6]={5,8,1,2,3,4};
    cout<<"pivot element is : "<<getpivot(arr,6)<<endl;
}*/




/*
#include<iostream>
using namespace std;

int sqrt(int n){

    for(int i=n;i>0;i--){
        if(n>=i*i){
            return i;
        }
    }
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sqrt(n);
}*/





#include<iostream>
using namespace std;

int sqrt(int n){

    int s=1,e=n,mid=s+(e-s)/2;
    while(s<=e){
        if(n==mid*mid){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return e;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sqrt(n);
}