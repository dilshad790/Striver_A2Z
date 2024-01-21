#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter size of array:"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Precomputation
    int hash[6]={0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]]+=1;
    }

//     int q;
// cout<<"Enter Queries:"<<endl;
//     cin>>q;
    
    
        // int num;6

            // fetch
for(int i=0; i<n; i++)
{
        cout<<hash[arr[i]]<<" ";
    }
 return 0;
}