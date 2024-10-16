/*
#include<iostream>
using namespace std;

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){

    
    int i = 5;
    cout<< &i <<endl;

    //create a reference variable
    int &j = i;
     

    cout<< i <<endl;
    j++;
    cout<< i <<endl;



    
    int i = 5;
    cout<< "Before : "<< i <<endl;
    update2(i);
    cout<< "After : "<< i <<endl;




    char ch = 'e';
    char *c = &ch;
    cout<< sizeof(ch) <<endl;
    cout<< sizeof(c) <<endl;
    
}*/



#include<iostream>
using namespace std;

int getsum(int* arr, int n){

    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i]; 
    }
    return sum;
}

int main(){

    int n;
    cin>> n ;

    int* arr = new int[n];

    for(int i=0; i<n ; i++){
        cin>> arr[i];
    }

    cout<<"The sum of the elements is : "<< getsum(arr , n)<<endl;
}