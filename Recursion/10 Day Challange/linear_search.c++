#include <iostream>
using namespace std;
bool search(int arr[],int n,int k)
{
    // if(n==1 && arr[0]!=k) or
if(n==0)
    return false;


    if(k==arr[0])
    return true;
    else return search(arr+1,n-1,k);
}
int main() {
    // Your code here

    int arr[5]={1,2,3,4,5};
   cout<< search(arr,5,10);
    return 0;
}