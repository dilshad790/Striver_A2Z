#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    // upperCase and lowerCase character me sirf 1 bit ka difference h wo 5th bit wala 
    char c;
    cin>>c;

    // upper to lowercase
    cout<<char(c|(1<<5))<<endl;

    cout<<char(c | ' ')<<endl; // sidha char or oprn with sapce

    // lower to upperCase
    cout<<char(c&(~(1<<5)))<<endl;

    cout<<char(c & '_')<<endl;
    

    return 0;
}
