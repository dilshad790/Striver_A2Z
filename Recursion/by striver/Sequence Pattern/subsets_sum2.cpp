#include <bits/stdc++.h>
using namespace std;
void subsetsum(vector<int>input,vector<int>output,int i,set<vector<int>>&ans)
{
if(i==input.size())
{ ans.insert(output);

    return ;

}
// excluude
subsetsum(input,output,i+1,ans);

// include
output.push_back(input[i]);
subsetsum(input,output,i+1,ans);

// output.pop_back();



}

int main() {
    // Your code here
    vector<int>input={1,2,2};
    vector<int>output;
    set<vector<int>>ans;
    int ind=0;
// sort input array first
sort(input.begin(),input.end());

    subsetsum(input,output,ind,ans);
vector<vector<int>>v2;

for(auto it:ans)
{
    v2.push_back(it);
}

for(int i=0; i<v2.size(); i++)
{
    for(int j=0; j<v2[i].size(); j++)
    {
        cout<<v2[i][j]<<" ";
    }
    cout<<endl;
}


// cout<<v2.size();
    return 0;
}


// optimal

// #include <bits/stdc++.h>
// using namespace std;
// void combSum2(vector<int>input,vector<int>&output,int ind,vector<vector<int>>&ans)
// {

//     ans.push_back(output);


// for(int i=ind; i<input.size(); i++)
// {
//     if(i!=ind && input[i]==input[i-1]) continue;

//     output.push_back(input[i]);
//     combSum2(input,output,i+1,ans);
//     output.pop_back();
// }

// }


// int main() {
//     // Your code here
//     vector<int>input ={1,3,2,1};
//     // sort input vector
//     sort(input.begin(),input.end());
//     vector<int>output;
//     int ind=0;
//     vector<vector<int>>ans;
// combSum2(input,output,ind,ans);

// for(int i=0; i<ans.size(); i++)
// {
//     for(int j=0; j<ans[i].size(); j++)
//     {
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }




//     return 0;
// }