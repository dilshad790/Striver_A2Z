#include <iostream>
using namespace std;
void sortarr(int arr[],int n)
{
    // base case
if(n==0 || n==1)
return;

// ek case solve krna hai
for(int i=0; i<n-1; i++)
{
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);

    // recursive call

    sortarr(arr+1,n-1);
}

}
int main() {
    // Your code here
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    sortarr(arr,5);

for(int i=0; i<5; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}