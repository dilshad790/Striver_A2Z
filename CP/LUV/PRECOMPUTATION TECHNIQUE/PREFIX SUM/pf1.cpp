#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int pf[N];
int main() {
    // Your code here

// M1- Simple Approach 
//  T.C-O(n)+O(t*n)

//     int n;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0; i<n; i++)
//     {
//         int x;
//         cin>>x;
//         arr[i]=x;
//     }
// int q;
// cin>>q;
// while(q--)
// {
//     int l,r;
//     cin>>l>>r;
//     int sum=0;
//     for(int i=l; i<=r; i++)
// {
//     sum+=arr[i];
// }
// cout<<sum<<endl;
// }

// Using Prefix Sum Technique
//  T.c-O(n)+O(q)

int n;
cin>>n;
int *arr=new int[n];
int sum=0;
for(int i=1; i<=n; i++)
{
    int x;
    cin>>x;
    arr[i]=x;
    sum+=arr[i];
    pf[i]=sum;

}
// cout<<pf[4]<<endl;
int q;
cin>>q;
 while(q--)
{
    int l,r;
    cin>>l>>r;
    // cout<<pf[l]<<" "<<pf[r]<<endl;
 int ans=pf[r]-pf[l-1];
 cout<<ans<<endl;
}

delete [] arr;
    return 0;
}