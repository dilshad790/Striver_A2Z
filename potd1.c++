#include<iostream>
using namespace std;
int catalan(int n)
{ if(n<=1)
return 1;
    int result=0;
    for(int i=0; i<n; i++)
    {
        result=catalan(i)*catalan(n-i-1);
    }
    result;
}
int main()
{
    int n=4;
    int ans=catalan(n);
cout<<ans;

 return 0;
}