#include<iostream>
using namespace std;

int main(){

    int num=5;
   // cout<<num<<endl;

  //  cout<<"The address of num is :"<< &num<<endl;

    int *ptr=&num;
   cout<<"The address is :"<<ptr<<endl;
    cout<<"The value is :"<<*ptr<<endl;

    double d=4.3;
 //   cout<<"The size of the d is :"<<sizeof(d)<<endl;
  //  cout<<"The size of the num is :"<<sizeof(num)<<endl;

    double *p = &d;
  // cout<<"The size of d is :"<<sizeof(d)<<endl;
    //cout<<"The size of ptr is :"<<sizeof(ptr)<<endl;
   // cout<<"The size of p is :"<<sizeof(p)<<endl;

    int *p2 = 0;
    p2 = &num;
   // cout<<*p2<<endl;
  //  cout<<p2<<endl;

   // cout<<"Before "<<num<<endl;
    (*ptr)++;
   // cout<<"After "<<num<<endl;
}