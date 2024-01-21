#include<iostream>
using namespace std;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    // BASE CASE
    if(nStairs<0)
    return 0;
    if(nStairs==0)
    return 1;

// RC
    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter stairs No. You want go=";
    cin>>n;
    int ans=countDistinctWays(n);
    cout<<"No. of ways to cimb the destination is="<<ans<<endl;
 return 0;
}