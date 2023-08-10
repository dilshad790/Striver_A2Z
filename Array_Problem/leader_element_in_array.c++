#include<iostream>
using namespace std;
int *leaderElemenet(int &arr[],int n)
{
int last=arr[a.size()-1];
vector<int>v;
v.push_back(last);
int superior=arr[0];
for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(arr[i]>arr[j])
        superior=a[i];
        
    }
    
}
}
int main()
{
    int arr[5]={1,2,2,1};
    leaderElemenet(arr,5);
    

 return 0;
}