/*
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;
    int ans=0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans =ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}*/


/*
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int digit=0;
    while(n!=0){
        int remain=n%2;
        digit=digit*10+remain;
        n=n/2;
    }
    
    int ans=0;
    while(digit!=0){
        int remainder=digit%10;
        ans=ans*10+remainder;
        digit=digit/10;
    }
    cout<<ans<<endl;
}*/



/*
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;


    int ans = 0;
    int i = 0;
    while(n > 0) {

        int bit = n & 1;
           
        ans =(bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;
    } 
    cout<<"Answer is "<< ans<<endl; 
}*/

