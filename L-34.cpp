/*
#include<iostream>
using namespace std;

//reverse string

string reverse(string s,int start,int end){

    if(start>end){
        return s;
    }
    swap(s[start],s[end]);
    start++;
    end--;

    return reverse(s,start,end);
}

int main(){

    string s = "harsh";
    cout<<reverse(s,0,s.length()-1)<<endl;
}*/




/*
#include<iostream>
using namespace std;

bool checkpalindrome(string s,int i,int j){

    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    i++;
    j--;
    return checkpalindrome(s,i,j);
}

int main(){

    string s = "apdlldpa";
    if(checkpalindrome(s,0,s.length()-1)){
        cout<<"Palindrome !"<<endl;
    }
    else{
        cout<<"Not palindrome !"<<endl;
    }
}*/





/*
#include<iostream>
using namespace std;

int power(int a, int b){

    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int ans = power(a,b/2);

    if(b%2==0){
        //if b is even 
        return ans * ans;
    }
    if(b%2==1){
        //if b is odd
        return a * ans * ans;
    }
}

int main(){

    int a,b;
    cout<<"Enter value of a and b : ";
    cin>>a >> b ;

    int ans = power(a,b);
    cout<<"Answer is : "<< ans <<endl;
}*/







/*

// Bubble sort using recursion

#include<iostream>
using namespace std;

void sortarray(int arr[],int n){

    //already sorted
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    return sortarray(arr,n-1);
}

int main(){

    int arr[5] = {3,8,1,4,9};
    int n = 5;
    sortarray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}*/






