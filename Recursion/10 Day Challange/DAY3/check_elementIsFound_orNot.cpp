#include <bits/stdc++.h>
using namespace std;

bool isFound(int arr[],int n,int key)
{
    if(n==1 && arr[0]!=key)
    return false;

else
{
bool ans=isFound(arr+1,n-1,key);
  return ans;  
} 

}
int main() {
    // Your code here
    int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
int key;
cin>>key;
cout<<isFound(arr,n,key);
    return 0;
}