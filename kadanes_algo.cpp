#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int>&v)
{
int maxi=INT_MIN;
    int sum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(sum<0)
        {
        sum=0;
        // continue;

        }

        sum+=v[i];
        maxi=max(sum,maxi);
    }
    return maxi;
}

int minSum(vector<int>&v)
{
    int sum=0;
    int mini=INT_MAX;

    for(int i=0; i<v.size(); i++)
    {
       sum+=v[i];
       mini=min(sum,mini);
if(sum>0)
sum=0;
    }
    return mini;

}

int main() {
    // Your code here
    int n;
    cin>>n;
   vector<int>v;
    for(int i=0; i<n; i++)
    { 
        int x;
        cin>>x;
        v.push_back(x);
    }

    

 cout<<maxSum(v)<<endl;
 cout<<minSum(v)<<endl;

   

    
    return 0;
}