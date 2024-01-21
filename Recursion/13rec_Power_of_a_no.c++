#include<iostream>
using namespace std;
// optimal approach for pwer of any no.
int power(int a,int b)
{
    // base case
    if(b==0)
    return 1;
    if(b==1)
    return a;
    //recursive call
    int ans=power(a,b/2);

    if(b%2==0)
    return ans*ans;
    else
    return a*ans*ans;
}
int main()
{
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    cout<<power(a,b);
 return 0;
}