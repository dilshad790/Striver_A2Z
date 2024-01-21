#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int a=4; //  100
    int b=5; // 1000
    cout<<(a&b)<<endl; // and operation
    cout<<(a|b)<<endl; // or operation
    cout<<(~a)<<endl; // not operation // extra care
    cout<<(a^b)<<endl; // xor operation

int left_shift=b<<3 ; 
cout<<left_shift<<endl;

int right_shift=b>>1;
cout<<right_shift<<endl;

    return 0;
}