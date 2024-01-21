#include <bits/stdc++.h>
using namespace std;
void print_Bianry(int n)
{
    for(int i=31; i>=0; i--)
    {
        cout<<(1&(n>>i));
    }
}
int main() {
    // Your code here
    int n,i;
    cin>>n>>i;
    print_Bianry(n&(~((1<<i+1)-1)));
    return 0;
}