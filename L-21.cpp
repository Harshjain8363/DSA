/*
#include<iostream>
using namespace std;

bool check(int arr[],int n){

    int maxi=INT8_MIN;
    int mini=INT8_MAX;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    for(int i=0;i<n;i++){
        mini=min(arr[i],mini);
    }
    cout<<mini<<endl;
    cout<<maxi<<endl;

    for(int i=0;i<n-1;i++){
        bool done =false;
        if(arr[i]-arr[i+1]==-1 || arr[i]-arr[i+1]==maxi-mini){
            done=true;
        }
        if(done==false){
            return false;
        }
    }
    return true;


}

int main(){

    int arr[4]={2,1};
    cout<<check(arr,2);
}*/






