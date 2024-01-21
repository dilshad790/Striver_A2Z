#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{
    int a,b,c;
     cin>>a>>b>>c;

    if(a+b>=10 || a+c>=10 ||b+c>=10 )
    cout<<"Yes";
    else cout<<"No";
}
 return 0;
}