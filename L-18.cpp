//insertion sort
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int insertionSort(int arr[],int n) {
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else{
                break;
            }
        }
    }
}

int main(){

    int arr[5]={36,12,78,25,60};
    insertionSort(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}