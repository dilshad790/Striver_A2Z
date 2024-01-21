#include<iostream>
using namespace std;
int fact(int n)
{
    // base case
    if(n==0)
    return 1;
    // recursive relation
    int smallproblem=fact(n-1);
    int badiproblem=n*smallproblem;
    return badiproblem;

}
int main()
{
    int ans=fact(5);
    cout<<ans;

 return 0;
}