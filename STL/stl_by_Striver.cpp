#include<bits/stdc++.h>
using namespace std;
int main()
{// pair 
/*
pair<int,int>p={1,3};
cout<<p.first<<" "<<p.second<<endl;

pair<int,pair<int,int>>p1={1,{2,4}};
cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
//  pair can also be treated a data type
pair<int,int>arr[]={{1,2},{4,3},{7,5}};
cout<<arr[0].first<<" "<<arr[2].second<<endl;

cout<<".............................. "<<endl;
*/

/*
// cout<<"vector"<<endl;
vector<int>v;
v.push_back(1);
v.push_back(5);
cout<<v[0]<<" "<<v[1]<<endl;
v.emplace_back(6); // faster than push_back
cout<<v[2]<<endl;

// a vector with a pair data type
cout<<"Vector with pair data type:"<<endl;
vector<pair<int,int>>v1;
v1.push_back({3,7});
v1.emplace_back(11,33);// no {}require 
cout<<v1[0].first<<endl;
cout<<v1[1].second<<endl;

// a vector with already initialze
vector<int>v2(5,100);
cout<<v2[0]<<" "<<v2[1]<<endl;

// copy one vector to another
vector<int>v3(v2);
cout<<v3[0]<<endl;


// Iterator-is like a pointer that point the memory address of an element
vector<int>v5={2,3,4,7,11,22};
// vector<int>::iterator it=v5.begin(); iterator declare
// v.begin()->address of 1st element 
// v.end()-> address of after the last element>>>>>>ALERT
for(vector<int>::iterator it=v5.begin(); it!=v5.end(); it++)
{
    cout<<*(it)<<" ";
}
cout<<endl;


// auto... it declaare the data type according to the value
// int a=5 
// auto a=5
// similarly in iterator we dont need to declare
for(auto it=v5.begin(); it!=v5.end(); it++)
{
    cout<<*(it)<<" ";
}
cout<<endl;

// erase()-if we want to delete the address of element
v5.erase(v5.begin()+1);
for(auto it=v5.begin(); it!=v5.end(); it++)
{
    cout<<*(it)<<" ";
}
cout<<endl;

// if i want to delete from position 1 to other
// erase(start,end)-> understanding pupose->erase[start,end)->means start include but end excluded
// so we need to pass after the element
v5.erase(v5.begin(),v5.begin()+3);// it delete 1st and 2nd element
for(auto it=v5.begin(); it!=v5.end(); it++)
{
    cout<<*(it)<<" ";
}

// insert function
vector<int>v6(2,100);// {100,100}
v6.insert(v6.begin(),300);//{300,100,100}
v6.insert(v6.begin()+1,2,55)// {300,55,55,100,100}

vector<int>copy(2,50);//{50,50}
 v6.insert(v6.begin(),copy.begin(),copy.end());// {50,50,300,55,55,100,100}

/// List-same like vector but it some its own function
// instead of insert()->push_front()
list<int>ls;
ls.push_back(5);// {5}
ls.emplace_back(4);// {5,4}
ls.push_front(6);// {5,4,6}
// rset of the function are same
// begin, end,insert,size,clear

*/
/*

// STACK->LIFO rule
stack<int>st;
st.push(1);
st.push(3);
st.push(7);
st.pop();
cout<<st.top()<<endl;
cout<<st.size()<<endl;
cout<<st.empty()<<endl;
// T.C->O(1)
cout<<"stack over..."<<endl;

*/
/*

// QUEUE-FIFO RULE
queue<int>q;
q.push(1);
q.push(3);
q.push(7);
q.pop();
cout<<q.size()<<endl;
cout<<q.front()<<endl;
cout<<q.back()<<endl;
cout<<"queue over..."<<endl;

*/
/*

// PRIORITY QUEUE-max value at top
// also known as Max Heap
priority_queue<int>pq;
pq.push(2);
pq.push(4);
pq.push(22);
cout<<pq.top()<<endl;
cout<<"Max priority queue over.."<<endl;
// if we want to keep minimum value at top the we need to maintain a minimum priority queue
// also known as Min Heap
priority_queue<int,vector<int>,greater<int>>pq2;
pq2.push(33);
pq2.push(11);
pq2.push(22);
cout<<"size of queue:"<<pq2.size()<<endl;
cout<<pq2.top()<<endl;

// Minm priority queue over
// T.c->
// for push() and pop()=O(N)
// for top()=O(1)

*/
/*

// SET-it keeps only unique value in sorted order
// it does not contain duplicate value
set<int>s;
s.insert(5);// {5}
s.insert(5);//{5}
s.insert(10);// {5,10}
s.insert(1);// {1,5,10}
s.insert(10);// {1,5,10}

auto it=s.find(5);// it returns an iterator means address of 5
cout<<*(it)<<endl;
s.erase(1);
cout<<s.count(10)<<endl;// if element is present in the set return 1
cout<<s.count(11)<<endl;// if element is not present in set return 0

auto it1=s.find(10);// find function find iterator
// s.erase(it1);// it takes constant time
// cout<<*(it1)<<endl;
auto it2=s.find(5);
s.erase(it1,it2);// erase element which is pointing by it1 and it2
cout<<s.count(10)<<endl;

*/
/*

// Multi Set- everything same as set but
// it can strore duplicate
multiset<int>ms;
ms.insert(1);// {1}
ms.insert(1);// {1,1}
ms.insert(1);// {1,1,1}
auto it=ms.find(1);
cout<<*(it)<<endl;
// ms.erase(1);// all 1's erased
int cnt=ms.count(1);
cout<<cnt<<endl;

// only sigle one erased
ms.erase(ms.find(1));
cout<<ms.count(1)<<endl;

ms.erase(ms.find(1),ms.find(1)+2);
// cout<<ms.count(1)<<endl;

*/

// unordered_set
// unordered_set<int>ust;
// all functions are same but lower_bound() and upper_bound() does not work
// T.c-O(1) generally
// T.c-O(N) once ine a blue moon


// map
 // key,value-> key must unique but value can be same 
 // map store the value in sorted order
map<int,int>mpp;
mpp[1]=10;
mpp.insert({3,2});// 3 is key and 2 is value

map<int,pair<int,int>>mpp2;

map<pair<int,int>,int>mpp3;
mpp3[{2,5}]=33;// {2,5} is key 33 is value

for(auto it:mpp)
{
    cout<<it.first<<it.second<<endl;
}

 return 0;
}