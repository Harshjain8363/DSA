/*
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int reverse(int arr[],int n,int m){

    for(int i=m+1;i<(m+n+1)/2;i++){
        swap(arr[i],arr[n+m-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5]= {10 ,9, 8, 6, 7};
    reverse(arr,5,2);
}*/




/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){

    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        e--;
        s++;
    }
    return v;
}

void print(vector<int> v){

    for(int i=0; i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main(){

    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);
    v.push_back(15);
    v.push_back(90);

    vector<int> ans=reverse(v);

    print(ans);
}*/



/*
#include<iostream>
using namespace std;

int movezeroes(int arr[],int n){

    int k=n-1;
    for(int s=0;s<n;s++){
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                bool done=false;
                for(int j=i;j<k;j++){
                    arr[j]=arr[j+1];
                    done=true;
                }
                if(done==false){
                    break;
                }
                arr[k]=0;
                k--;
            }
        }
    }    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[3]={0,0,1};
    movezeroes(arr,3);
}*/





/*
#include<iostream>
using namespace std;

int movezeroes(int arr[],int n){
    
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            if(i!=k){
                arr[k]=arr[i];
                arr[i]=0;
            }
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[3]={0,0,1};
    movezeroes(arr,3);
}*/





