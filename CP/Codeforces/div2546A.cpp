#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1; i<=w; i++)
    {
sum+=k*i;
    }

if(n>=sum)
cout<<0<<endl;
else
cout<<(sum-n)<<endl;

    return 0;
}