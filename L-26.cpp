#include<iostream>
using namespace std;

void print(int *p){

    cout<<*p<<endl;
}

void update(int *p){

    //p = p+1;
    *p = *p + 1;
}

int main(){

   // int arr[10]={2,6,4};

 /*   cout<<"Address of first block is : "<< arr <<endl;
    cout<<"Address of first block is : "<< &arr[0] <<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<2[arr]<<endl; */


/*
    int temp[10];
    cout<<"Size : "<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<"Size : "<<sizeof(ptr)<<endl;
    cout<<"Size : "<<sizeof(*ptr)<<endl;
    cout<<"Size : "<<sizeof(&ptr)<<endl;  */

    /*
    int a[20]={1,6,9,3};
    cout<< a <<endl;
    cout<< &a <<endl;
    cout<< &a[0] <<endl;

    int *p = &a[0];
    cout<< p <<endl;
    cout<< *p <<endl;
    cout<< &p <<endl;  */

    /*
    int arr[10];
    int *ptr = &arr[0];
    
    cout<< ptr <<endl;
    ptr = ptr + 1;
    cout<< ptr <<endl;  */


    /*
    int arr[10];
    char ch[6] = "abcde";

    cout<< arr <<endl;
    cout<< ch <<endl;

    char *c = &ch[0];
    cout<< c << endl;


    char temp = 'e';
    char *p = &temp;
    cout<< p <<endl;*/



    int value = 5;
    int *p = &value;
   // print(p);

   cout<<"Before : "<<*p<<endl;
   update(p);
   cout<<"After : " <<*p<<endl;



}