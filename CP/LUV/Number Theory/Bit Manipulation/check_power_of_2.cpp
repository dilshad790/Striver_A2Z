#include <bits/stdc++.h>
using namespace std;
bool power_of_two(int n)
{
    if(n==0)
    return 0;
    else return !(n&(n-1));
}
int main() {
    // Your code here
    int n;
    cin>>n;
    if(power_of_two(n))
    cout<<1<<endl;
    else cout<<0<<endl;

cout<<(-4&-5);
    return 0;
}