#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{ 
    // base case
    if(n==0)
    return 1;

// Badi problem
int chhoti_problem=fact(n-1);

// recurence relation
int badi_problem=n*chhoti_problem;

return badi_problem;
}
int main() {
    // Your code here

    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}