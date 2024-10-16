/*
#include<iostream>
#include<array>
using namespace std;
int main(){

    array<int,5> a={2,3,4,5,6};
    cout<<"first element:"<<a.front()<<endl;
    cout<<"Last element:"<<a.back()<<endl;
    cout<<"empty or not:"<<a.empty()<<endl;
}*/



/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a);

    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity of the vector is:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity of the vector is:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity of the vector is:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity of the vector is:"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity of the vector is:"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity of the vector is:"<<v.capacity()<<endl;

    cout<<"front element:"<<v.front()<<endl;
    cout<<"last element:"<<v.back()<<endl;
    cout<<"empty or not:"<<v.empty()<<endl;

    v.pop_back();

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<v.size()<<endl;
    v.clear();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}*/



/*
#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"print first index element:"<<d.at(1)<<endl;
    cout<<"front element:"<<d.front()<<endl;
    cout<<"end element:"<<d.back()<<endl;
    cout<<"empty or not:"<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin());
    cout<<d.size()<<endl;
}*/




/*
#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;

    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
}*/


/*
#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;
    cout<<"empty or not: "<<s.empty()<<endl;
}*/



/*
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");
    
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}*/



/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
     
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int> ,greater<int> > mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(0);
    maxi.push(2);

    int n=maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(4);
    mini.push(0);
    mini.push(2);

    int m=mini.size();

    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"empty or not: "<<mini.empty()<<endl;
}*/



/*
#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    s.insert(6);
    s.insert(3);
    s.insert(6);
    s.insert(7);
    s.insert(5);
    s.insert(1);
    s.insert(3);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"7 is present or not: "<<s.count(7)<<endl;
 
    set<int>::iterator itr=s.find(5);
    cout<<"value present at itr :"<<*it<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}*/



/*
#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string> m;
    m[1]="babbar";
    m[13]="kumar";
    m[2]="love";
    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13: "<<m.count(13)<<endl;

    //m.erase(13);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}*/




#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
 /*   cout<<binary_search(v.begin(),v.end(),5)<<endl;

    int a=5;
    int b=9;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<"print the value of a and b : "<<a<<" "<<b<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;*/
}


