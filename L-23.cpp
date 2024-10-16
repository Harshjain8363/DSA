#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][3],int target,int row,int col){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int printsum(int arr[][3],int row,int col){

    int maxi = INT_MIN;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
        if(maxi<sum){
            maxi=sum;
        }
    }
    cout<<endl;
    cout<<"Largest row sum is : "<<maxi<<endl;
}



int main(){

  int arr[3][3]={1,12,3,24,8,9,10,11,15};
  //  int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
 // int arr[3][3];

    //taking input rowwise
  /*  for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }*/

    //Taking input coulmnwise
 /*   for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }*/

    //print
    bool done =false;
    for(int i=0;i<3;i++){
        if (done ==false){
            for(int j=0;j<3;j++){
                cout<<arr[j][i]<<" ";
            }
            done = true;
        }
        else{
            for(int j=2;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
            done = false;
        }
    }
    /*cout<<"Enter a target element:";
    int target;
    cin>>target;

    if(ispresent(arr,target,3,3)){
        cout<<"Element found !"<<endl;;
    }
    else{
        cout<<"Element not found !"<<endl;;
    }

    printsum(arr,3,3);*/











/*
    bool done=false;
    for(int i=0;i<3;i++){
        
        if (done==false){
            for(int j=0;j<3;j++){
                cout<<arr[j][i]<<" ";
            }
            done=true;
        }
        else{
            for(int j=2;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
            done=false;
        }
    }
    cout<<endl;*/
}