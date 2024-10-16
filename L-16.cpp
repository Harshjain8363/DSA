//selection sort
#include<iostream>
using namespace std;

int selectionsort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}    

int main(){

    int arr[5]={36,12,78,25,60};
    selectionsort(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}