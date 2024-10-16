/*
#include<iostream>
using namespace std;

int factorial(int n){

        if(n==0){
            return 1;
        }
        int fact = n * factorial(n-1);
        return fact;

   
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    int ans = factorial(n);
    cout<< ans <<endl;
}*/







/*
#include<iostream>
using namespace std;

int power(int n){

    if(n==0){
        return 1;
    }
    int ans = 2 * power(n-1);
    return ans;
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout << power(n)<<endl;
}*/








#include<iostream>
using namespace std;

void printdec(int n){

    if(n==0){
        return ;
    }
    cout<< n <<endl;
    printdec(n-1);

}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    printdec(n);

}