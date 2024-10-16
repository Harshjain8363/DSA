/*
#include<iostream>
using namespace std;

void singleelement(int arr[],int size){

    for (int i=0;i<size;i++){
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
                i=i+1;
                k=-1;
            }
        }
        int count = 1;
        for (int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                count=count+1;
            }
        }
        if(count==1){
            cout<<"Single element is "<<arr[i];
            break;
        }
    }
}

int main(){

    //Here size of array is 2M+1 where M elements present twice and one number is present only once.

    int size;
    cout<<"Enter the size of array:";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }
    singleelement(arr,size);
}*/

/*
#include<iostream>
using namespace std;

void alternate(int arr[],int size){

    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){

    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }

    alternate(arr,size);
}*/

/*
#include<iostream>
using namespace std;

int main(){

    int size=5;
    int ans=0;
    int arr[5]={1,2,2,3,1};
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}*/

/*
#include<iostream>
using namespace std;

void unique_occurence(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=0; j<i;j++){
            if(arr[j]==arr[i]){
                arr[i]=0;
                i=i+1;
                j=-1;
            }
        }
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
            }
        }
        if(i<size){
            cout<<arr[i]<<" is entered "<<count<<" times."<<endl;
            arr[i]=count;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==0 || arr[j]==0){
                continue;
            }
            if(arr[i]==arr[j]){
                cout<<"is not unique";
                break;
            }
        }

            cout<<"unique";

    }

}
int main(){

    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }

    unique_occurence(arr,size);
}*/

/*
#include<iostream>
using namespace std;

void unique(int arr[],int size){

    for(int i=0; i<size;i++){
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
                i=i+1;
            }
        }
        int count = 1;
        for(int j=i+1; j<size; j++){
            if (arr[i]==arr[j]){
                count=count+1;
            }
        }
        cout<<arr[i]<<" is entered "<<count<<" times."<<endl;

    }
}

int main(){

    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element:";
        cin>>arr[i];
    }

    unique(arr,size);

}*/

/*
#include<bits/stdc++.h>
using namespace std;

int findduplicate(int arr[],int size){
    cout << "[";
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                cout<<arr[i];
            }
            if(i<size){
                    cout<<",";
            }
        }
    }
    cout<<"]";
}

int main(){

    int arr[7]={1,2,3,4,1,2,4};
    findduplicate(arr,7);
vector<int>arr1[7];
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,7};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}*/

/*
#include<iostream>
using namespace std;

int intersaction(int arr1[],int n, int arr2[],int m){

    //Here elements are sorted in both the arrays

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr2[j]>arr1[i]){
                break;
            }
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-5678;
                break;
            }
        }
    }
}

int main(){

    int n;
    cout<<"Enter the size of first array:";
    cin>>n;

    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of second array:";
    cin>>m;

    int arr2[m];
    for(int i=0;i<m;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr2[i];
    }

    intersaction(arr1,n,arr2,m);
}*/

/*
//Second method
#include<iostream>
using namespace std;

int intersaction(int arr1[],int n, int arr2[],int m){

    //Here elements are sorted in both the arrays

    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }

        else if(arr1[i]>arr2[j]){
            j++;
        }

        else{
            i++;
        }
    }
}

int main(){

    int n;
    cout<<"Enter the size of first array:";
    cin>>n;

    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of second array:";
    cin>>m;

    int arr2[m];
    for(int i=0;i<m;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr2[i];
    }

    intersaction(arr1,n,arr2,m);
}*/

/*
#include<iostream>
using namespace std;

int FindPairs(int arr[],int n, int S){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==S){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}

int main(){

    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }

    int S;
    cout<<"Enter the value of S:";
    cin>>S;
    FindPairs(arr,n,S);
}*/

/*
#include<iostream>
using namespace std;

int FindPairs(int arr[],int n, int S){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==S){
                    cout<<arr[i]<<" "<<arr[j]<<" " <<arr[k]<<endl;
                }
            }
        }
    }
}

int main(){

    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }

    int S;
    cout<<"Enter the value of S:";
    cin>>S;
    FindPairs(arr,n,S);
}*/

/*
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int one = 0, two = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
        if (arr[i] == 2)
        {
            two++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (zero != 0)
        {
            arr[i] = 0;
            zero--;
        }
        else if (one != 0)
        {
            arr[i] = 1;
            one--;
        }
        else
        {
            arr[i] = 2;
        }
    }
}

int main()
{

    int arr[5] = {1, 2, 0, 2, 0};
    sort012(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}*/

/*
#include<iostream>
using namespace std;

void sorting(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){

    int arr[5]={1,2,0,2,0};
    sorting(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}*/



/*
#include<iostream>
using namespace std;

void sorting(int arr[],int size){

    int start=0;
    int end=size-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else if (arr[end]==1){
            end--;
        }
        else{
            swap(arr[start],arr[end]);
        }
    }
}

int main(){

    int arr[5]={1,0,0,1,0};
    sorting(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}*/







/*
#include<iostream>
using namespace std;
void sort012(int arr[],int n){
    int start=0,mid=0,end=n-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            start++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}
int main(){
    int arr[5]={1,2,0,2,0};
    sort012(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}*/
