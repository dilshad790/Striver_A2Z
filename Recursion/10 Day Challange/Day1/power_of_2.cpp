#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    if(n==0)
    return 1;

    int smaller=power(n-1);
    int badi=2*smaller;

    return badi;
}
int main() {
    // Your code here
    int n;
    cin>>n;
   int result= power(n);
   cout<<result;
    return 0;
}
