#include <bits/stdc++.h>
using namespace std;
void combSum(vector<int>input,vector<int>&output,int t,int i,vector<vector<int>>&ans)
{
    // base Case
    if(i==input.size())
    {

    if(t==0)
    {
        ans.push_back(output);
        
    }
        return;

    }

    // pick
    if(input[i]<=t)
    {
    output.push_back(input[i]);
combSum(input,output,t-input[i],i,ans);
    output.pop_back();

    }
// do not pick
combSum(input,output,t,i+1,ans);


}
int main() {
    // Your code here
    vector<int>v={2,3,5};
    int target=8;
vector<vector<int>>ans;
vector<int>output;
int index=0;
    combSum(v,output,target,index,ans);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}