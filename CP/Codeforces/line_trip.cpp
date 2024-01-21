#include <bits/stdc++.h>
using namespace std;
// const int N=50+5;
// int arr[N];
//     int n,x;
    int arr[50];

int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--)
    {
int n,x;
    cin>>n>>x;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

int res=2*(x-arr[n]);

for(int i=1; i<=n; i++)
res=max(res,arr[i]-arr[i-1]);
cout<<res<<endl;

    }
    return 0;
}