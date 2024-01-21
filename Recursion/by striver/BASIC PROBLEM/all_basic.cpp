#include <bits/stdc++.h>
using namespace std;

// print 1 to n
void fun(int i,int n)
{
    if(i>n)
    return ;

    cout<<i;
    fun(i+1,n);
}

// print n to 1
void fun2(int i,int n)
{
    if(i>n) return;
    fun2(i+1,n);
    cout<<i;
}


int main() {
    // Your code here
    int n=5,i=1;
    
    fun(i,n);
    cout<<endl;
    fun2(i,n);
    return 0;
}