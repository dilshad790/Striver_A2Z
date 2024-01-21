#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    // Base Case
    if(a%b==0) return a;
    // process
    return gcd(b,a%b);
}
int main()
{
    int x=sqrt(12)
    cout<<x;
    int a;
    int b;
    cin>>a>>b;
    cout<<gcd(a,b);
 return 0;
}