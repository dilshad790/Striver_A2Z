#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    cout<<"Reversed array is :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }

}

// T.C-O(N) and S.C-O(N)

// void reverseArray(int arr[],int n)
// {
//     int ans[n];
//     for(int i=n-1; i>=0; i++)
//     {
//         ans[n-i-1]=arr[i];
//     }
//     printArray(ans,n);
// }

// T.C-O(N) and S.C-O(1)

// void reverseArray(int arr[],int n)
// {
//     int p1=0,p2=n-1;
//     while(p2>p1)
//     {
//         swap(arr[p1],arr[p2]);
//     p1++;
//     p2--;
//     }
//     printArray(arr,n);
// }

// Using recursion
void reverseArray(int arr[],int s,int e)
{
    if(s<e)
    {
        swap(arr[s],arr[e]);
    reverseArray(arr,s+1,e-1);
    
    }
}
int main()
{
    int n=5;
    int arr[]={5,4,3,2,1};
    // reverseArray(arr,n);
    reverseArray(arr,0,n-1);
    printArray(arr,n);
 return 0;
}