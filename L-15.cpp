/*
#include<iostream>
using namespace std;

bool isposible(int arr[],int n,int m,int mid){

    int pagesum=0;
    int stucount=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum=pagesum+arr[i];
        }
        else{
            stucount++;
            if(stucount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[],int n,int m){

    int s=0,e=0;
    for(int i=0;i<n;i++){
        e=e+arr[i];
    }
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isposible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){

    int arr[4]={10,20,30,40};
    cout<<allocatebooks(arr,4,2)<<endl;;
}*/





#include<iostream>
using namespace std;

bool isposible(int arr[],int k,int mid){

    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=arr[i];
        }
        return false;
    }
}

int aggresivecows(int arr[],int k){

    int s=0,maxi=-1;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi,mid=s+(e-s)/2,ans=-1;
    while(s<=e){
        if(isposible(arr,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){

    int stalls[5]={1,2,3,4,5};
    aggresivecows(stalls,2);
}
