/*
#include<iostream>
using namespace std;

int main(){

    int num[15]={2,5};
    int n=15;

    for(int i=0; i<n;i++){
        cout<< num[i] <<" "; 
    }
}*/



/*
#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int third[15]={2,7};
    PrintArray(third,15);
    cout<<endl;

    int fourth[10]={0};
    PrintArray(fourth,10);
    cout<<endl;

    int fifth[10]={1};
    PrintArray(fifth,10);
}*/



/*
#include<iostream>
using namespace std;

int main(){

    int fifth[10];
    cout<<sizeof(fifth)/sizeof(int);
}*/


/*
#include<iostream>
using namespace std;

int getmax(int num[],int n){

    int max = INT8_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max; 
}   

int getmin(int num[],int n){

    int min = INT8_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min; 
}   

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is "<<getmax(num,size)<<endl;
    cout<<"Minimum value is "<<getmin(num,size)<<endl;

}*/

/*
#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }

    cout<<"The sum of the "<<size<<" elements is "<<sum;
}*/



/*
#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[10] = {2,6,8,90,72,54,10,78,32,65};

    int key;
    cout<<"Enter the key value you want to search for: ";
    cin>>key;

    cout<<search(arr,10,key);

}*/





/*
#include<iostream>
using namespace std;

int reverse(int arr[],int size){
    
    for (int i=0;i<size/2;i++){
        int extra=0;
        extra=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=extra;
    }
    cout<<"The reverse array"<<endl;

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int smith[n];
    for( int i = 0; i<n;i++){
        cout<<"Enter "<<i+1<<" element of the array: ";
        cin>>smith[i];
    }

    reverse(smith,n);
}*/




/*
#include<iostream>
using namespace std;

void reverse(int arr[],int size){

    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"Reverse array"<<endl;

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int watson[5]={3,7,2,9,1};
    reverse(watson,5);
}*/



/*
#include<iostream>
using namespace std;

void alternativereverse(int arr[],int size){

    for (int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }

    cout<<"Alternative Reverse Order"<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int rohit[size];
    for (int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element of the array: ";
        cin>>rohit[i];
    }

    alternativereverse(rohit,size);
}*/




/*
#include<iostream>
using namespace std;

void duplicate(int arr[],int size){

    for (int i=0;i<size;i++){   
        int count=1;
        for (int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
            }
        }    
        cout<<"Element "<<arr[i]<<" is entered "<<count<<" times."<<endl;
    }        
    
}

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int shreyas[n];
    for (int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element of the array: ";
        cin>>shreyas[i];
    }

    duplicate(shreyas,n);
}*/



/*
#include<iostream>
using namespace std;

void intersection(int arr1[],int size1,int arr2[],int size2){

    cout<<"Common Elements"<<endl;
    for (int i=0;i<size1;i++){
        for (int j=0;j<size2;j++){
            if (arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}
int main(){

    int size1;
    cout<<"Enter the size of first array: ";
    cin>>size1;

    int arr1[size1];
    for (int i=0;i<size1;i++){
        cout<<"Enter "<<i+1<<" element of first array: ";
        cin>>arr1[i];
    }
    int size2;
    cout<<"Enter the size of second array: ";
    cin>>size2;

    int arr2[size2];
    for (int i=0;i<size2;i++){
        cout<<"Enter "<<i+1<<" element of second array: ";
        cin>>arr2[i];
    }
    intersection(arr1,size1,arr2,size2);  
}*/





