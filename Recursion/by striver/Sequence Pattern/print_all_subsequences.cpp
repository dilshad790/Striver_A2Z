#include <bits/stdc++.h>
using namespace std;
void  print_subset(vector<int>& v,vector<vector<int>>&ans,vector<int>subst ,int i,int n)
{
if(i>=n)
{
    ans.push_back(subst);
    return ;
}
int element=v[i];
subst.push_back(element);
 print_subset(v,ans,subst,i+1,n);

subst.pop_back();
 print_subset(v,ans,subst,i+1,n);
}
int main() {
    // Your code here
    vector<int>v={1,2,3};
    int n=v.size();
    // cout<<n;
    vector<vector<int>>ans;
    vector<int>subst;
    print_subset(v,ans,subst,0,n);

for(auto row:ans)
{
for(auto col:row)
cout<<col<<" ";
cout<<endl;
}
cout<<endl;

cout<<ans.size();
    return 0;
}