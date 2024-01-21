#include <iostream>
using namespace std;
// int sumf(int arr[],int size,int sum)
// {
// if(size==0)
// return sum;

// sum+=arr[0];
// sumf(arr+1,size-1,sum);

// }
int getSum(int arr[],int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    int rem=getSum(arr+1,n-1);
    int sum=arr[0]+rem;
    return sum;
}
int main() {
    // Your code here
    int arr[5]={1,2,3,4,5};
cout<<getSum(arr,5);
    return 0;
}