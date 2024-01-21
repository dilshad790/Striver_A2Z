
#include <bits/stdc++.h>
using namespace std;
// void subsequence(string input, string output, int index, vector<string> &ans)
// {
//     if (index >= input.size())
//     {
//         ans.push_back(output);
//         return;
//     }
//     // exclude
//     subsequence(input, output, index + 1, ans);
//     // include
//     char element = input[index];
//     output.push_back(element);
//     // cout<<"size of output"<<output.size()<<endl;
//     solve(input, output, index + 1, ans);

// }

// method 2

void subsequence(vector<int>input,vector<int>&output,int i)
{

    if(i>=input.size())
    {
        for(auto it:output)
        cout<<it<<" ";
cout<<endl;
        return ;
    }

    output.push_back(input[i]);
    subsequence(input,output,i+1);

    output.pop_back();
    subsequence(input,output,i+1);
}


int main()
{
    // Your code here

    vector<int> input = {3,1,2};

    vector<string> ans;
    vector<int> output;
    int index = 0;
    subsequence(input, output, index);
    // cout<<ans[0][0]<<endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout<<ans.size();



    return 0;
}