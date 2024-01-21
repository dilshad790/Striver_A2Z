#include <bits/stdc++.h>
using namespace std;
void reverse(stack<int>&s)
{
    vector<int>v;
    while(!s.empty())
    {
        int x=s.top();
        v.push_back(x);
        s.pop();
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        s.push(v[i]);
    }
}
int main()
{
    // Your code here
   
        int n;
        stack<int>s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        
           while 

    return 0;
}