#include <iostream>
using namespace std;

// EUCLID ALGORITHM
// m1
// int gcd(int a,int b)
// {
//     if(a==b)
//     return a;

//     if(a==0)
//     return b;

//     if(b==0)
//     return a;

//     if(a>b)
//    return gcd(a-b,b);

//     else return gcd(a,b-a);

// }

int gcd(int a,int b)
{
    if(a==0)
    return b;
// return gcd(a%b,b)
// return gcd(a%b,a);
return gcd(b%a,a);
     
}

int main() {
    // Your code here
    int a=48;
    int b=18;
    cout<<gcd(a,b);
    return 0;
}