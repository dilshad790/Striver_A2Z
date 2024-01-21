#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here

    int n;
    cin >> n;
    // unordered_map<int, bool> mpp;
    vector<int>v;
    // cout<<v.size();

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // cout<<v.size()<<endl;
int x=v.size();
// cout<<v[x-1]<<endl;
int ans=-1;
for(int i=v[0]; i<v[n-1]; i++)
{ 
    if(i!=v[i])
    ans=i;
    
}
cout<<ans;

    return 0;
}