#include <iostream>
using namespace std;
// find factorial 

// int fact(int n)
// { // base case
//     if(n==0)
//     return 1;

// // recursive relation
//     return n*fact(n-1);
// }
int power(int n)
{
    if(n==0)
    return 1;

    return 2*power(n-1);
}

// print n to 1
void print(int n)
{
    if(n==0)
    return ;

    // recursive relation
    // cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";

}
int main() {
    // Your code here

int n=10;
// int ans=fact(n);
// cout<<ans;

int ans=power(n);
cout<<ans<<endl;

print(n);
    return 0;
}