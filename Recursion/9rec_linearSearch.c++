#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int k)
{
    if(n==0)
    return false;
    if(arr[0]==k)
    return true;
    bool remainingPart=linearSearch(arr+1,n-1,k);
    return remainingPart;
}
int main()
{
    int arr[5]={2,3,4,6,1};
    int k=3;
    bool ans=linearSearch(arr,5,4);
    // bool ans=linearSearch(arr,5,11); key not in array
    if(ans)
    cout<<"Milgaya"<<endl;
    else
    cout<<"Ni Millo"<<endl;
 return 0;
}