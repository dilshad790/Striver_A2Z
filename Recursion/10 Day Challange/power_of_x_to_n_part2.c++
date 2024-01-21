#include <bits/stdc++.h>
using namespace std;

double mypower(double a,int b)
{
double ans=1.0;
long long temp=b;

if(temp<0) temp=-1*temp;

while(temp)
{
    if(temp%2)
    {
        ans=ans*a;
        temp=temp-1;
    }
    else{
a=a*a;
temp=temp/2;
    }
}

if(b<0)
{
    ans=double(1.0)/(double)(ans);
}

return ans;

}

int main() {
    // Your code here

int a=2;
int b=-10;
cout<<abs( 2.14748e+09)<<endl;
// cout<<mypower(a,b)<<endl;


    return 0;
}