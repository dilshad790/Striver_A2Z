#include<iostream>
using namespace std;
int fib(int n)
{
    // fibonacci series=0 1 1 2 3 5 8 13
    // base case
    if(n==0)
    return 0; // 0th term

    if(n==1) // 1st term
    return 1;
    // recursive relation
    int ans =fib(n-1)+fib(n-2);
    return ans;
}


int main()
{
    int n;
    cout<<"Enter no.=";
    cin>>n;
    cout<<endl;
    int result=fib(n);
    cout<<"Fibonacci no. is="<<result<<endl;
 return 0;
}