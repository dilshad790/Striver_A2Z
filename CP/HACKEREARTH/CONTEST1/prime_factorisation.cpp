#include <bits/stdc++.h>
using namespace std;
// brute force t.c-O(n)
// s.c-O(n)
// vector<int> primefactor(int n)
// {
//      vector<int>v;
//     int i=2;
//     while(n!=1)
//     {
//         if(n%i==0)
//         {
//             v.push_back(i);
//             n=n/i;
//             i=2;
//         }
// else i++;

//     }
//     for(int i=0; i<v.size(); i++)
//     cout<<v[i]<<" ";
//     return v;
// }

void primeFactor(int n)
{

    // case 1 - n is even
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }

    // case2 n is odd but not a prime number
for(int i=3; i<=sqrt(n); i+=2)
{ while(n%i==0)
{
    cout<<i<<" ";
    n=n/i;

}
}

// n is prime number
if(n>2)
cout<<n;
    

}
int main() {
    // Your code here
//     int n=10;
//     cout<<sqrt(n)<<endl;
//    vector<int>v=primefactor(n);

int n2=11;
primeFactor(n2);


    return 0;
}