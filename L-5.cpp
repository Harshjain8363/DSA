/*
#include<iostream>
using namespace std;

int main(){

    int a=4;
    int b=6;

    cout<<" a&b "<<(a&b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" ~a "<<~a<<endl;
    cout<<" a^b "<<(a^b)<<endl;
}*/

/*
#include<iostream>
using namespace std;

int main(){

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
}*/
/*
#include<iostream>
using namespace std;

int main(){
         
      int n;
      cout<<"Enter the value of n :";
      cin>>n;

      for(int i=1;i<=n;i++){
        cout<<i<<endl;
      }   
}*/

/*
#include<iostream>
using namespace std;

int main(){
         
      int n;
      cout<<"Enter the value of n :";
      cin>>n;
      
      int sum=0;
      for(int i=1 ;i<=n;i++){
           sum=sum+i;
      }
      cout<<sum<<endl;
}*/


/*
#include<iostream>
using namespace std;

int main(){
         
      int n;
      cout<<"Enter the value of n :";
      cin>>n;

      int a=0;
      int b=1;
      cout<<a<<" "<<b<<" ";

      for(int i=1;i<=n;i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
      }
} */

/*
#include<iostream>
using namespace std;

int main(){
         
      int n;
      cout<<"Enter the value of n :";
      cin>>n;

      bool isprime=1;
      for(int i=2;i<n;i++){
         if (n%i==0){
             isprime=0;
         }
      }
      if (isprime==0){
        cout<<n <<" is not a prime number. ";
      }
      else{
        cout<<n<<" is a prime number.";
      }
}*/



/*
#include<iostream>
using namespace std;

int main(){

  for(int i=1;i<=4;i++){
    cout<<"Hello"<<endl;
    cout<<"Hii"<<endl;
    continue;
    cout<<"Namaste"<<endl;
  }
}*/




