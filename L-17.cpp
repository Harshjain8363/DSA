//Bubble sort
#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}    

int main(){

    int arr[5]={36,12,78,25,60};
    bubblesort(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}