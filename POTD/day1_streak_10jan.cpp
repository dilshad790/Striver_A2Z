#include <bits/stdc++.h>
using namespace std;
// Longest subarray with sum divisible by k

// int longest_sum(vector<int>v,int divisor)
// {

// int maxi=INT_MIN;
// for(int i=0; i<v.size(); i++)
// {
//     for(int j=i; j<v.size(); j++)
//     {
//     int sum=0;
//     int cnt=0;
//         for(int k=i; k<=j; k++)
//         { 
//             sum+=v[k];
//             // cout<<"sum"<<sum<<endl;
//             // cout<<"element"<<v[k]<<endl;
//             cnt++;
//             // cout<<"count"<<cnt<<" "<<k<<endl;
//         }
//         if(sum%divisor==0){
//             // cout<<"sum"<<sum<<endl;
//         maxi=max(cnt,maxi);
//         }
//     }
// }
// return maxi;
// }

// int longest_sum(vector<int>v,int k)
// {
//     int maxi=0;
//     for(int i=0; i<v.size(); i++)
//     { 
//         int sum=0;
//     int cnt=0;
//         for(int j=i; j<v.size(); j++)
//         {
//             sum+=v[j]; 
//             cnt++;
//             if(sum%k==0)
//         maxi=max(maxi,cnt);
//         }
        
//         // cout<<"maxi"<<maxi<<sum<<endl;
//     }
//     return maxi;
// }


int longest_sum(vector<int>nums,int k)
{
     int n=nums.size();
        unordered_map<int,int> m;
        m[0]=1;         
        int sum=0;
        int rem=0;
        int count=0;

        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            rem=sum%k;
            
            if(rem<0)
            rem=rem+k;

            if(m.find(rem)!=m.end())
            {
                count+=m[rem];
            }
            m[rem]++;
        }
        return count;
        
    }

int main() {
    // Your code here
int n,k;
cin>>n>>k;
vector<int>v(n);

for(int i=0; i<n; i++)
{
    cin>>v[i];
}

// cout<<v.size()<<endl;

cout<<longest_sum(v,k);


    return 0;
}