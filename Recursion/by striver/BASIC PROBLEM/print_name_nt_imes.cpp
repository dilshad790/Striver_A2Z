#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n==0)
    {
        
        return ;
    } 
    cout<<"Dilshad"<<endl;
    fun(n-1);
}
int main() {
    // Your code here
    int n=3;
    fun(n);
    return 0;
}