#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,3,11,33,6,8,9};
    
//     int lengthOfArr=sizeof(arr)/sizeof(int);
//     cout<<lengthOfArr<<endl;
    sort(arr,arr+7); // 2,3,6,8,9,11,33
//     int it=lower_bound(arr,arr+7,3)-arr;
//     int it2=lower_bound(arr,arr+7,6)-arr;
//     int it3=lower_bound(arr,arr+7,10)-arr;
//     int it4=lower_bound(arr,arr+7,55)-arr;
//     cout<<it<<endl;
//     cout<<it2<<endl;
//     cout<<it3<<endl;
//     cout<<it4<<endl;
// cout<<".................."<<endl;
    // upperbound
    // sort(arr,arr+7); // 2,3,6,8,9,11,33
    int it=upper_bound(arr,arr+7,3)-arr;
    int it2=upper_bound(arr,arr+7,5)-arr;
    int it3=upper_bound(arr,arr+7,6)-arr;
    int it4=upper_bound(arr,arr+7,33)-arr;// returning index of outside the array
    int it5=upper_bound(arr,arr+7,20)-arr;
cout<<it<<endl;
cout<<it2<<endl;
cout<<it3<<endl;
cout<<it4<<endl;
cout<<it5<<endl;

 return 0;
}