// Find Sub array and print
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> findSubarray(vector<int> arr)
{
    vector<vector<int>> ans;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> subarr;
            for (int k = i; k < j; k++)
            {
                subarr.push_back(arr[k]);
            }
            ans.push_back(subarr);
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {1,2,3,4};
    vector<vector<int>> s = findSubarray(v);
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}