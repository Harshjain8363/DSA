/*
#include<iostream>
using namespace std;

// Find out that array is sorted or not using recursion

int a = 0;
int b = 1;

bool issorted(int arr[], int n){

    if(b==n || n==0){
        return true;
    }
    if(arr[a]>arr[b]){
        return false;
    }
    a++;
    b++;
    issorted(arr,n);
}

int main(){

    int arr[0] = {};
    if(issorted(arr , 0)){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
}*/






/*
#include<iostream>
using namespace std;

// Function to check if an array is sorted or not using recursion

bool issorted(int arr[], int n, int index = 0) {
    
    if (index == n - 1)
        return true;
    
   
    if (arr[index] > arr[index + 1])
        return false;

   
    return issorted(arr, n, index + 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    if (issorted(arr, n))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;
    return 0;
}*/







/*
#include<iostream>
using namespace std;

int sum(int arr[],int n,int index = 0,int s = 0){

    if(index==n){
        return s;
    }
    s = s+arr[index];
    sum(arr,n,index+1,s);
}

int main(){

    int arr[5] = { 10,20,3,7,50};
    int a = sum(arr,5);
    cout<<"The sum of the array is : "<<a<<endl;
}*/







/*
#include<iostream>
using namespace std;

bool check(int arr[],int n,int target,int index=0){

    if(index==n){
        return false;
    }
    if(target==arr[index]){
        return true;
    }
    check(arr,n,target,index+1);
}

int main(){

    int arr[5]= {1,2,3,4,5};
    int target = 4;
    bool isfound = check(arr,5,target);
    if(isfound){
        cout<<"Element is found !"<<endl;
    }
    else{
        cout<<"Element is not found !"<<endl;
    }
} */






/*
#include<iostream>
using namespace std;

bool binarysearch(int arr[],int target,int s,int e){
    
    int mid = s+(e-s)/2;

    if(s>e){
        return false;
    }
    if(target==arr[mid]){
        return true;
    }
    if(target>arr[mid]){
        s=mid+1;
    }
    if(target<arr[mid]){
        e=mid-1;
    }
   
    binarysearch(arr,target,s,e);
    
}

int main(){

    int arr[7] = {1,2,3,4,5,6,7};
    int target = 2;
    int size = 7;
    int s=0;
    int e=size-1;
    bool isfound = binarysearch(arr,target,s,e);
    if(isfound){
        cout<<"Element found !"<<endl;
    }
    else{
        cout<<"Element not found !"<<endl;
    }
}*/







/*
#include<iostream>
using namespace std;

int print(int arr[],int s,int e){

    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarysearch(int* arr,int s,int e,int target){

    cout<<endl;
    print(arr,s,e);
    
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    if(arr[mid]==target){
        return true;
    }
    if(arr[mid]>target){
        return binarysearch(arr,s,mid-1,target);
    }
    if(arr[mid]<target){
        return binarysearch(arr,mid+1,e,target);
    }
}

int main(){

    int arr[7] = {3,4,5,6,7,89,90};
    int size = 7;
    int s=0;
    int e=size-1;
    int target = 9;
    if(binarysearch(arr,s,e,target)){
        cout<<"Element found !"<<endl;
    }
    else{
        cout<<"Element not found !"<<endl;
    }
}*/






