#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getFrequencies(int arr[],int n) {
    // Write Your Code Here
    // int n=v.size();
cout<<"I am fine"<<endl;
    vector<bool>visited(n,false);
    int maxFreq=0;
    int minFreq=n;
    int maxEle=0;
    int minEle=0;
    
    for(int i=0; i<n; i++)
 {
     int count=1;
   if(visited[i]==true) continue;

   for(int j=i+1; j<n; j++)
  {
  if (arr[i] == arr[j])
   {
     visited[j] == true;
     count++;
   }
  }
cout<<"I am fine"<<endl;
   if(count>maxFreq)
   {
       maxEle=arr[i];
       maxFreq=count;
   }

   if(count<minFreq)
   {
       minEle=arr[i];
       minFreq=count;
   }
}

    
    cout<<maxEle<<" "<<minEle;
}

int main()
{
    int arr[]={1,2,1,2,3,4,2};
   int n=sizeof(arr)/sizeof(arr[0]);


 cout<<getFrequencies(arr,n);

 return 0;
}