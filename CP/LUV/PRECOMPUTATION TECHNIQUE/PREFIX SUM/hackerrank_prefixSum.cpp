// https://www.hackerrank.com/challenges/crush/problem

#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N];
int main() {
    // Your code here

    int  n,q;
    cin>>n>>q;

while(q--)
{
    int a,b,k;
    cin>>a>>b>>k;
    // int sum=0;
    // for(int i=a; i<=b; i++)
    // arr[i]+=k;

    arr[a]+=k;
    arr[b]-=k;

}

for(int i=1; i<=n; i++)
arr[i]+=arr[i-1];

int maxi=-1;
for(int i=1; i<=n; i++)
maxi=max(maxi,arr[i]);

cout<<maxi<<endl;

//  T.C=O(q*n) =10^5*10^7=10^12

    return 0;
}