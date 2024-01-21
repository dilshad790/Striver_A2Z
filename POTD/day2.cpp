// Reverse First K elements of Queue

#include <bits/stdc++.h>
using namespace std;

queue<int> modify_queue(queue<int>&q ,int k)
{
    // vector<int>v;
    int qs=q.size();
    int *v=new int[qs];
    // queue size before deletion
    // cout<<"qs"<<qs<<endl;
    for(int i=0; i<qs; i++)
    {
        int x=q.front();
        // cout<<q.front()<<" ";
        v[i]=x;
        q.pop();
    }
// int qs2=q.size();

// for(int i=0; i<v.size(); i++)
// {
//     cout<<v[i]<<" ";
// }

for(int i=k-1; i>=0; i--)
{
    q.push(v[i]);
}
for(int i=k; i<qs; i++)
{
    q.push(v[i]);
}

free(v);
return q;

}
int main() {
    // Your code here
    int n,k;
    cin>>n>>k;

    queue<int>q;
for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    q.push(x);
}
modify_queue(q,k);

while(!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}


    return 0;
}
