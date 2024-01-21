#include<iostream>
using namespace std;
int main()
{  // Mistake Notes realted to no. of element in array
    int arr[5];
    cout<<sizeof(arr)<<endl; // 1
    // 2 cout<<arr.length(arr); -> error aisa kv mt krna aisa kuchh ni hota h

// 3
// int arr1[10]={1,2,3,4};
//     cout<<sizeof(arr1)<<endl;
//     cout<<sizeof(arr1)/sizeof(arr1[0]); // Galat ans dega 

// Right Method-array ka size declare mt kro
    int arr1[]={1,2,3,4};
    cout<<sizeof(arr1)<<endl;
    cout<<sizeof(arr1)/sizeof(arr1[0]);

 return 0;
}