#include<iostream>
using namespace std;
int main()
{
    // int arr[10]={3,6,5};
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;
int arr[10];
// arr=arr+1; not possible bcz nme is fixed in symbol table
cout<<arr<<endl;
int *p=&arr[0];
p=p+1;
cout<<p<<endl;

 return 0;
}