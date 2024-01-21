#include <bits/stdc++.h>
using namespace std;
void sumofSubsequence(int arr[], int n, vector<int> &output, int i, int s, int sum)
{

    if (i >= n)
    {
        if (s == sum)
        {
            for (int i = 0; i < output.size(); i++)
            {
                cout << output[i]<<" ";
            }
            cout << endl;

            
        }
        return;
    }
    // include
    output.push_back(arr[i]);
    s += arr[i];

    sumofSubsequence(arr, n, output, i + 1, s, sum);

    // exclude
    s -= arr[i];
    output.pop_back();

    sumofSubsequence(arr, n, output, i + 1, s, sum);
}

int main()
{
    // Your code here
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    vector<int> output;
    int index = 0;

    // vector<vector<int>>ans;
    sumofSubsequence(arr, n, output, index, 0, k);
    // cout<<ans.size()<<endl;

    // for(int i=0; i<ans.size(); i++)
    // {
    //     for(int j=0; j<ans[i].size(); i++ )
    //     {
    //         cout<<ans[i][j]<<endl;
    //     }
    // }

    return 0;
}