/*
// Macros example
#include<iostream>
using namespace std;
#define pi 3.14

int main(){

    int r = 5;
    float ans = pi * r * r;
    cout<< ans <<endl;
}*/




/*
#include<iostream>
using namespace std;

void print(int arr[],int n,int start = 0){

    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    // Default Args
    int arr[5] = {2,4,6,9,1};
    print(arr,5,2);
}*/






/*
// Example of Global variable ans
#include<iostream>
using namespace std;

int ans = 90;

void print(int arr[],int n,int start = 0){

    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
        cout<< ans <<endl;
        ans++;
    }
}

int main(){

    cout<< ans <<endl;
    int arr[5] = {2,4,6,9,1};
    print(arr,5,2);
    
}*/






// Inline function example
#include<iostream>
using namespace std;

inline int GetMax(int& a, int& b){
    return (a>b)? a : b;
}

int main(){

    int a=3;
    int b=4;
    int ans = GetMax(a,b);
    cout<< ans <<endl;


}