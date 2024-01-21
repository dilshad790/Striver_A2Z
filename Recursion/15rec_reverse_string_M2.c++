#include<iostream>
using namespace std;
// Reverse string using single pointer

void reverseString(string& str,int i,int n)
{
    // base case
    if(i>=n/2)
    return;
    swap(str[i],str[n-i-1]);
    reverseString(str,i+1,n);
    

}
int main()
{
    string str="Hello";
    cout<<"Before:"<<str<<endl;
    reverseString(str,0,str.length()-1);
        cout<<"After:"<<str<<endl;
 return 0;
}