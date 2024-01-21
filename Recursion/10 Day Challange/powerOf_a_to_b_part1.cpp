#include <bits/stdc++.h>
using namespace std;
// power of x to n using recursion -Isme sara edge case ni lia hua to -ye code fat sakta 
// a or b-float,double,max_int,min_int
int power(int a,int b)
{
    // base case
    if(b==0)
    return 1;

    if(b==1)
    return a;

    // recursive call
    int ans=power(a,(b/2));

    // ek case solve krdo
    if(b%2==0)
    {
    ans =ans*ans;
    cout<<ans<<endl;
    return ans;
    }
    else
    { ans=a*ans*ans;
    cout<<ans<<endl;
return ans;
    }
}
int main() {
    // Your code here
double a=2.0000;
cout<<INT_MAX<<endl;
cout<<INT_MIN<<endl;

int b=-10;
// cout<<a/b<<endl;
// cout<<1.0/1024<<endl;
cout<<power(a,b)<<endl;
    return 0;
}