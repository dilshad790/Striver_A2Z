#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Your code here
    vector<int>v={2,6,1,5,11,10,2,8,4};
    priority_queue<int>pq; // max priority aueue
    for(int i=0; i<v.size(); i++)
    {
        pq.push(v[i]);
    }
    cout<<pq.top()<<endl; // T.c-O(klogn)

    priority_queue<int,vector<int>,greater<int>>pq2;
    
     for(int i=0; i<v.size(); i++)
    {
        pq2.push(v[i]);
    }
    cout<<pq2 .top(); // T.c-O(klogn)
    return 0;
}