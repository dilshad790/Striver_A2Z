#include<iostream>
using namespace std;
int getsum(int *arr,int n)
// int getsum(int arr[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        // sum+=i[arr];

    }
    return sum ;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int result=getsum(arr,5);
    int new_result=getsum(arr+3,2);
    cout<<result<<endl;
    cout<<new_result<<endl;


 return 0;
}