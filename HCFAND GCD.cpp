
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
     return b;
    if(b==0)
    return a;
    while(a !=b)
    {
        if(a>b)
        a=a-b;
        if(b>a)
        b=b-a;
    }
}
int main()
{
int x,y,ans;
cout<<"Enter two number";
cin>>x>>y;
ans=gcd(x,y);
cout<<"gcd="<<ans;

 return 0;
}
