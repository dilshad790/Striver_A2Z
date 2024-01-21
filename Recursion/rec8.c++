#include<iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    // Base Case
    if(n==0)
    return true;
    if(arr[0]>arr[1])
    return false;
    // Recursive call
  bool ans= isSorted(arr+1,n-1);
  return ans;
}
int main()
{
    // int arr[4]={2,1,6,3};
    int arr[4]={1,2,3,4};
    bool ans =isSorted(arr,4);
    if(ans)
    cout<<"Array is sorted"<<endl;
    else
    cout<<"Array is not sortde"<<endl;

 return 0;
}