#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int n,i;
    cin>>n>>i;
    cout<<(n&((1<<i+1)-1))<<endl;
    return 0;
}