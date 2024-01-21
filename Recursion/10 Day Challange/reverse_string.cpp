#include <iostream>
using namespace std;
// void reverseString(string &s,int i,int j)
// {
//     // base case
//     if(i>j)
//     return ;
// // ek case solve kro
// swap(s[i],s[j]);
// reverseString(s,i+1,j-1);
// }

// using single pointer
void reverseString(string &s,int i,int n)
{
    if(i>n/2)
    return;

    swap(s[i],s[n-i-1]);
    reverseString(s,i+1,n);

}
int main() {
    // Your code here
string s="Hello";
// reverseString(s,0,s.length()-1);
reverseString(s,0,s.size());
cout<<s;
    return 0;
}