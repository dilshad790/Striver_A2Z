#include <bits/stdc++.h> 
using namespace std;
void sortArray(vector<int>&arr, int n)
{
    // Write your code here

    int count_0=0;
    int count_1=0;
    int count_2=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==count_0)
        {
        count_0++;}
        else if(arr[i]==count_1){
        count_1++;}
        else {count_2++;}
    }
    for(int i=0; i<count_0;i++)
    {
        arr[i]=0;
    }
    for(int i=count_0; i<=count_0+count_1; i++)
    {
        arr[i]=1;
    }
    for(int i=count_0+count_1; i<n; i++)
    {
        arr[i]=2;
    }
}
int main()
{
vector<int>v={2,2,2,2,0,0,1,0};
int n=v.size();
sortArray(v,n);
for(int i=0; i<n; i++)
{
    cout<<v[i]<<" ";
}


    return 0;
}