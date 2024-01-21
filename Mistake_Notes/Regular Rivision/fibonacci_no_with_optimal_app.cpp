#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
int n=5;

int a=0,b=1;
int c;
while(n!=2)
{
    c=a+b;
    a=b;
    b=c;  
    n--;
}
cout<<c;
    return 0;
}