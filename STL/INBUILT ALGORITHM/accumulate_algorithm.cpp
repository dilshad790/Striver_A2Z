#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    vector<long long>v={1000000001 ,1000000002, 1000000003, 1000000004, 1000000005};
    long long ans=accumulate(v.begin(),v.end(),0);
    cout<<ans;
    return 0;
}