/*
#include<iostream>
using namespace std;

int main(){

    //2D array using dynamic memory allocation
    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr = new int*[row];

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //taking inputs
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //print output
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    // Delete dynamic variables from heap

    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;
}*/





// Homework
// Create jaggered array
#include<iostream>
using namespace std;

int main(){

    //2D array using dynamic memory allocation
    int row;
    cin>>row;

    int col[10];
    for(int i=0;i<row;i++){
        cin>>col[i];
    }    

    int** arr = new int*[row];

    for(int i=0;i<row;i++){

        arr[i]=new int[col[i]];
    }

    //taking inputs
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }

    //print output
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    // Delete dynamic variables from heap

    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;
}