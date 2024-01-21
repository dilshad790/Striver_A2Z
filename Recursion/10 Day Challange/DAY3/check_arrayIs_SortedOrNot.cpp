 #include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==0 || n==1)
    return true;

    if(arr[0]>arr[1])
    {

    return false;
    }
else 
{
cout<<arr[0]<<" "<<arr[1]<<endl;
    bool remaining_part=isSorted(arr+1,n-1);

return remaining_part;
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

cout<<isSorted(arr,n);



    return 0;
}