#include<iostream>
using namespace std;
// fibonacci series using recursion
// T.C-O(2^n)
int fib(int n)
{
    if(n==1)
    return 0; 
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2);

}
int main()
{
    int n=5;
    cout<<fib(n);
 return 0;
}