#include <bits/stdc++.h>
using namespace std;
// Brute force
// void subsetsum(vector<int>input,vector<int>output,int i,vector<int>&ans)
// {
// if(i==input.size())
// { int sum=0;
//     for(auto it:output)
//     sum+=it;

//     ans.push_back(sum);

//     return ;

// }

// subsetsum(input,output,i+1,ans);

// // include
// output.push_back(input[i]);
// subsetsum(input,output,i+1,ans);

// // output.pop_back();


// }

// optimal
void subsetSum(vector<int>&input,int i,int sum,vector<int>&ans)
{
if(i==input.size())
{
    ans.push_back(sum);
    return;
}

// include
subsetSum(input,i+1,sum+input[i],ans);

// exclude
subsetSum(input,i+1,sum,ans);
}
int main() {
    // Your code here
//     vector<int>input={1,2,3};
//     vector<int>output;

// int ind=0;
// vector<int>ans;

// subsetsum(input,output,ind,ans);

// for(auto it:ans)
// cout<<it<<" ";


vector<int>input={1,2,3};
vector<int>ans;
int ind=0;
int sum=0;
subsetSum(input,ind,sum,ans);
sort(ans.begin(),ans.end());

for(auto it:ans)
cout<<it<<" ";

    return 0;
}