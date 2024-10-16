/*
#include<iostream>
using namespace std;

void BinarySearch(int arr[],int size,int key){

    int start=0,end=size-1,mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(end==start && mid==end){
            cout<<"Not found !";
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
            mid=start+(end-start)/2;
        }
        else{
            end=mid-1;
            mid=(start+end)/2;
        }
    }
}

int main(){

    int arr[5]={12,15,19,25,28};
    BinarySearch(arr,5,28);
}*/







/*
#include<iostream>
using namespace std;

void position(int arr[],int n,int s){

    for(int i=0;i<n;i++){
        if(arr[i]==s){
            cout<<i<<" ";
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==s){
            cout<<i;
            break;
        }
    }
}

int main(){

    int arr[7]={1,3,4,4,4,5,7};
    position(arr,7,4);
}*/


/*
#include<iostream>
using namespace std;

void FirstPosition(int arr[],int n,int k){

    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<ans<<" ";
}

void LastPosition(int arr[],int n,int k){

    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<ans;

}


int main(){

    int arr[7]={1,3,4,4,4,5,7};
    FirstPosition(arr,7,4);
    LastPosition(arr,7,4);
}*/





/*
#include<iostream>
using namespace std;

void peekindex(int arr[],int n){

    int peek=1;
    for(int i=2;i<n;i++){
        if(arr[i]>arr[peek]){
            peek=i;
        }
    }
    cout<<peek;
}

int main(){

    int arr[5]={1,2,3,2,1};
    peekindex(arr,5);
}*/




/*
#include<iostream>
using namespace std;

void peekindex(int arr[],int )

int main(){
    int arr[5]={1,2,3,2,1};
    peekindex(arr,5);
}*/





#include<iostream>
using namespace std;

void peekelement(int arr[],int n){
    int peek=-2^31;
    for(int i=0;i<n;i++){
        if(arr[i]>peek){
            peek=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==peek){
            cout<<i;
            break;
        }
    }
}

int main(){
    int arr[7]={1,2,7,1,3,5,4};
    peekelement(arr,7);
}
