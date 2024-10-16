/*
#include<iostream>
#include<string>
using namespace std;

int getlength(char name[]){

    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char name[],int len){

    int s=0;int e=len-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    
}

char getlower(char ch){

    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        int temp=ch-'A'+'a';
        return temp;
    }
} 

bool checkpalindrome(char a[],int n){

    int s=0,e=n-1;
    while(s<=e){
        
        if(getlower(a[s])!=getlower(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){

    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"your name is:"<<name<<endl;

    cout<<"length of name is:"<<getlength(name)<<endl; 

    int len=getlength(name);
    reverse(name,len);

    cout<<"Reverse of name is:"<<name<<endl;

    cout<<"Palindrome or not : "<<checkpalindrome(name,len);
}


//Check If The String Is A Palindrome

#include<iostream>
using namespace std;

bool valid(char ch){

    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}

char getlower(char ch){

    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkpalindrome(string s){

    int start=0;
    int end=s.length()-1;
    while(start<end){
        if(s[start]!=s[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

bool ispalindrome(string s){

    string temp="";
    for(int i=0;i<s.size();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        temp[i]=getlower(temp[i]);
    }

    cout<<temp<<endl;

    cout<< checkpalindrome(temp)<<endl;
}

int main(){

    string s="0P";
    ispalindrome(s);
}*/



/*
//max occurance
#include<iostream>
using namespace std;

int maxoccurance(string s){

    int arr[26]={0};
    int number=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            number=s[i]-'a';
        }
        else{
            number=s[i]-'A';
        }
        arr[number]++;
    }

    int maxi=-1;
    int ans;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans=i;
        }
    }
    char finalans='a'+ans;
    cout<<finalans<<endl;
    cout<< maxi<<endl;
    
}

int main(){

    string s;
    cin>>s;

    maxoccurance(s);
}*/





#include<iostream>
using namespace std;

string removeduplicates(string s){

    for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i=-1;
            }
        }
        cout<< s;
}

int main(){

    string s="aaaaaaba";
    removeduplicates(s);
}


