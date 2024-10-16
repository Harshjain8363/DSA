#include<iostream>
using namespace std;

int main(){
    
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;



  //  cout<<"Address of p1 : "<< p1 <<endl;
    // cout<<"Value of p2 : "<< *p2 <<endl;


 //   cout<< i <<endl;
 //   cout<< *p1 <<endl;
 //   cout<< **p2 <<endl;



   // cout<< p1 <<endl;
  //  cout<< &i <<endl;
 //   cout<< *p2 <<endl;



  //  cout<< &p1 <<endl;
    //cout<< p2 <<endl;




    /*
    int arr[4] = {3,9,5,6};
    cout<<endl<< arr <<endl<<endl;
    cout<<endl<< arr+1 <<endl<<endl;
    cout<< *arr <<endl;
    cout<< *arr+1 <<endl;
    cout<< &arr <<endl;  */





    /*
    int k = 8;
    int *ptr = &k;
    cout<< *ptr <<endl;  */



    /*
    char ch = 'A';
    ch++;
    cout<< ch <<endl;*/




    char arr[] = "abcde";
    char *p = arr;
    cout<< p <<endl;
    cout<< *p <<endl;
}