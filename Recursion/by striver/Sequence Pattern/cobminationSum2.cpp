// #include <bits/stdc++.h>
// using namespace std;

// // but duplicates combinations are not allowed
// // void combSum(vector<int> input, vector<int> &output, int t, int ind, vector<vector<int>> &ans)
// // {
// //     if (ind == input.size())
// //     {
// //         if (t == 0)
// //         {
// //             ans.push_back(output);
// //         }
// //         return;
// //     }

// //     if (input[ind] <= t)
// //     {
// //         output.push_back(input[ind]);
// //         combSum(input, output, t - input[ind], ind + 1, ans);
// //         output.pop_back();
// //     }
// //     combSum(input, output, t, ind + 1, ans);
// // }

// void combSum(vector<int> input, vector<int> &output, int t, int ind, vector<vector<int>> &ans)
// {
//     if (ind == input.size())
//     {
//         if (t == 0)
//         {
//             ans.push_back(output);
//         }
//         return;
//     }

//     if (input[ind] <= t)
//     {
//         output.push_back(input[ind]);
//         combSum(input, output, t - input[ind], ind + 1, ans);
//         output.pop_back();
//     }
//     combSum(input, output, t, ind + 1, ans);
// }

// int main()
// {
//     // Your code here
//     // int n;
//     // cin >> n;

//     // vector<int> v(n);
//     // for (int i = 0; i < n; i++)
//     //     cin >> v[i];
//     // int target;
//     // cin >> target;

//     // vector<vector<int>> ans;
//     // vector<int> output;
//     // int index = 0;

//     // combSum(v, output, target, index, ans);

//     // for (int i = 0; i < ans.size(); i++)
//     // {
//     //     for (int j = 0; j < ans[i].size(); j++)
//     //     {
//     //         cout << ans[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     int ind=0;
//     int t;
//     cin>>t;
//     vector<int>output;
//     vector<vector<int>>st;
// combSum(v,output,t,ind,st);

// sort(st.begin(),st.end());
// for(auto row:st)
// {
//     for(auto col:row)
//     {
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }
//     return 0;
// }

// optimal way T.C-2^n *k 
#include <bits/stdc++.h>
using namespace std;

void combinations_sum_ii(vector<int>arr,vector<vector<int>>&ans,vector<int>ds,int ind,int target)
{
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }

for(int i=ind; i<arr.size(); i++)
{
    if(i>ind && arr[i]==arr[i-1])
    continue;
    if(arr[i]>target)
    break;
    ds.push_back(arr[i]);
    combinations_sum_ii(arr,ans,ds,i+1,target-arr[i]);
    ds.pop_back();
}

}
int main() {
    // Your code here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int target;
    cin>>target;
vector<vector<int>>ans;
vector<int>ds;
sort(arr.begin(),arr.end());
int ind=0;
combinations_sum_ii(arr,ans,ds,ind,target);

for(auto row:ans)
{

for(auto col:row)
{
cout<<col<<" ";

}

cout<<endl;
}

    return 0;
}