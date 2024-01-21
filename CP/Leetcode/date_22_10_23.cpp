#include <bits/stdc++.h>
using namespace std;
int minimumSum(vector<int>& nums) {
            int minm=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            { if(i<j && nums[i]>nums[j])
            break;
                for(int k=j+1; k<nums.size(); k++)
                {
            //         if(j<k && nums[k]>nums[j])
            // break;
                    if(i<j && j<k && nums[i]<nums[j] && nums[k]<nums[j])
                    { 
                        int sum=nums[i]+nums[j]+nums[k];
                        minm=min(minm,sum);
                    }
                    else if(i==nums.size()-3 && nums[i]>nums[j] || nums[k]>nums[j])
                    return -1;
                }
                
            }
        }
        return minm;
    }
int main() {
    // Your code here

vector<int>v={8,6,1,5,3};
cout<<minimumSum(v);


    return 0;
}