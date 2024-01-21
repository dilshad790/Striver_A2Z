#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--)
    { 
        int a,b,c;
        cin>>a>>b>>c;
       cout<<1-(abs(b-c))%2<<" "<<1-(abs(a-c))%2<<" "<<1-(abs(a-b))%2<<endl;
    }
    return 0;
}