#include <bits/stdc++.h>
using namespace std;

int main()
{  
    // Your code here

    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 1; i <= n; i++)
    {
        vector<int> temp;
        while (i)
        {
            int rem = i % 2;
            temp.push_back(rem);
            i = i / 2;
        }
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {

    }
    return 0;
}