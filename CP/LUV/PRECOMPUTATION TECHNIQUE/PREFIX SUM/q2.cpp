#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
int pf[N];
int main() {
    // Your code here

int n,m;
cin>>n>>m;
int arr[n];
int arr2[m];
for(int i=0; i<n; i++)
{
cin>>arr[i];
}

for(int i=0; i<m; i++)
{
    cin>>arr2[i];
    pf[arr2[i]]++; 
}
cout<<pf[-1]<<endl;
vector<long long>v;
for(int i=0; i<n; i++)
{
    if(pf[arr[i]]==0)
    v.push_back(arr[i]);

}

for(int i=0; i<v.size(); i++)
{
    cout<<v[i]<<" ";
}
    return 0;
}