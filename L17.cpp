/* 
--------ALL ABOUT STL AND HOW TO USE IT-------
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
using namespace std;

int main(){
    array<int, 4> a;
    a = {1,2,3,4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n ";
    cout<<"Empty = "<<a.empty()<<endl;
    cout<<"a at third index "<<a[3]<<endl;
    cout<<"a at 2nd index "<<a.at(2)<<endl;
    cout<<"first element of a is "<<a.front()<<endl;
    cout<<"last element of a is "<<a.back()<<endl;    

    vector<int> v(5,1);
    vector<int> last(v);

    cout<<"vector last will be "<<endl;
    for (int i:last)
    {
        cout<< i<<" ";
    }
    cout<<""<<endl;

    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    cout<<"capacity-"<<v.capacity()<<endl;
    cout<<"size-"<<v.size()<<endl;
    //front(), back(),at(), functions work same for arrays and vectors.

    cout<<"vector v will be "<<endl;
    for (int i:v)
    {
        cout<< i<<" ";
    }
    cout<<""<<endl;

    //before pop
    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<< i<<" ";
    }
    cout<<""<<endl;

    v.pop_back();

    //after pop
    cout<<"after pop"<<endl;
    for (int i : v)
    {
        cout<< i<<" ";
    }
    cout<<""<<endl;
    // v.clear() is used to  clear the size of a vector (not capacity)

    // deque or DQ or doubly ended queue is just an array with dynamic memory 
    // in which values can be inserted or removed from both the ends i.e. beggining 
    // and the end of the queue. All array functions like front(),back(),pop_back(),
    // pop_front(),empty(),at(),size() work the same.

    deque<int> d(5,1);

    cout<<d.size()<<endl;
    for (int i:d)
    {
        cout<< i<<" ";
    }
    cout<<""<<endl;

    d.erase(d.begin(),d.begin()+2);  // only the erase command works differently here

 for (int i:d)
    {
        cout<< i<<" ";
    }
    cout<<""<<endl;

    // list stl is implemented with the help of double-linked list, where there are   
    // two pointers, one to the beggining and one at the end. direct access cannot be done,
    // if we need to access the element at a specific index, we need to traverse through
    // one by one.
    // All array functions like front(),back(),pop_back(),
    // pop_front(),push_back(), push_front(), empty(),size() work the same.
    // but erase function erases one given element at a time as data cannot be accessed in 
    // a continuous form.

    list<int> l(5,2);
    cout<<l.front()<<endl;
    cout<<"before erasing"<<endl;

    for (int i:l)
    {
        cout<< i <<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    
    cout<<"after erasing"<<endl;
    
    for (int i:l)
    {
        cout<< i <<" ";
    }
    cout<<endl;

    // stack is basically just a pile of data
    // last input is the first output 

    stack<string> s;
    s.push("hii");
    s.push("vscode");
    s.push("works");

    cout<<"empty or not = "<<s.empty()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    // size of stack 
    cout<<"Size of stack "<<s.size()<<endl;

    // queue is first in first out, line of data
    queue<string> q;
    q.push("oye");
    q.push("chotuu");
    q.push("hatt");
    // size of queue
    cout<<"Size of queue "<<q.size()<<endl;
    cout<<"empty or not = "<<q.empty()<<endl;
    cout<<"front element "<<q.front()<<endl;
    cout<<"last element "<<q.back()<<endl;
    q.pop();
    cout<<"front element "<<q.front()<<endl;


    //priority queue - 
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(5);
    maxi.push(6);
    maxi.push(1);
    maxi.push(8);

    //Size of queue
    cout<<"Size- "<<maxi.size()<<endl;
    int n = maxi.size();

    for (int i = 0; i <n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(0);
    mini.push(6);
    mini.push(4);
    mini.push(9);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"is empty or not- "<<mini.empty()<<endl;

    // set is a collection of unique elements and no element is repeated.

    set<int> set;

    set.insert(8);
    
        

    
}

*/