/*
#include<iostream>
using namespace std;

int main(){
          
    char ch = '1';
    cout<< endl;
    switch(ch){

        case 1: cout<<"First"<<endl;
                break;

        case '1': cout<<"Second"<<endl;
                break;

        default: cout<<"it is default case."<<endl;                
    }
    cout << endl;
} */


/*
#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform:";
    cin>>op;

    switch(op){
         
        case '+':cout<<a+b<<endl;
                  break;

        case '-':cout<<a-b<<endl;
                 break;

        case '*':cout<<a*b<<endl;
                 break;

        case '%':cout<<a%b<<endl;
                 break;

        case '/':cout<<a/b<<endl;
                 break; 

        default:cout<<"Please enter a valid operation."<<endl;                                           
    }
}*/



/*
#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the value of amount:";
    cin>>a;
 
    int b = a/100;
    cout<<"The number of 100 rs. note is:"<<b<<endl;

    int c = (a-b*100)/50;
    cout<<"The number of 50 rs. note is:"<<c<<endl;

    int d = (a-b*100-c*50)/20;
    cout<<"The number of 20 rs. note is:"<<d<<endl;

    int e = (a-b*100-c*50-d*20)/1; 
    cout<<"The number of 1 rs. note is:"<<e<<endl;  
}
*/


/*
#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    int ans = 1;
    for (int i=1;i<=b;i++)
        ans = ans*a;

    cout<<ans<<endl;    
}*/


/*
#include<iostream>
using namespace std;

int pow(int a, int b){

    int ans=1;
    for(int i=1;i<=b;i++)
        ans=ans*a;

    return ans;
           
}

int main(){

    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    int ans = pow(a,b);
  
    cout<<"Answer is :"<<ans<<endl;


}*/



/*
#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;
    }

    else{
        return 1;
    }
}

int main(){
    int num;
    cin>>num;

    if (isEven(num)){
        cout<<"Number is even."<<endl;
    }

    else{
        cout<<"Number is odd."<<endl;
    }
}*/


/*
#include<iostream>
using namespace std;

int factorial(int n){

    int fact=1;
    for (int i=1; i<=n; i++)
        fact=fact*i;

    return fact;    
}

int nCr(int n,int r){

    int numer = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    return numer/denom;
}

int main(){

    int n,r;
    cin>>n>>r;

    cout<<"Answer is:"<< nCr(n,r);
    
}*/


/*
#include<iostream>
using namespace std;

void PrintCounting(int n){

    for (int i=1;i<=n;i++)
        cout<<i<<" ";
}

int main(){

    int n;
    cin>>n;

    PrintCounting(n);
}*/



/*
#include<iostream>
using namespace std;

bool IsPrime(int n){

    for(int i=2;i<n;i++)
        if (n%i==0){
            return 0;
        }
    return 1;
}

int main(){

    int n;
    cin>>n;

    if (IsPrime(n)){
        cout<<"Is a prime number.";
    }
    else {
        cout<<"Is not a prime number.";
    }
}*/


/*
#include<iostream>
using namespace std;

void AP(int n){
    cout<<3*n+7;
}

int main(){

    int n;
    cin>>n;

    AP(n);
}*/


/*
#include<iostream>
using namespace std;

int fibo(int n){
    int num1=0;
    int num2=1;
    int i=3;
    int fib=0;
    while(i<=n){
        fib=num1+num2;
        num1=num2;
        num2=fib;
        i++;
    }
    return fib;
}

int main(){
    int n;
    cout<<"Enter the term that you want :"<<endl;
    cin>>n;

    cout<<"The " <<n<<"th term is "<<fibo(n)<<endl;
}*/




/*
#include<iostream>
using namespace std;

int update(int a){
    a = a/2;
}

int main(){
    int a=10;
    update(a);
    cout<<a<<endl;
}
*/






/*
#include<iostream>
using namespace std;

int update(int a){
    int ans = a*a;
    return ans;
}

int main(){
    int a=14;
    a = update(a);
    cout<<a<<endl;
}*/



