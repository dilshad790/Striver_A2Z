#include <bits/stdc++.h>
using namespace std;
void func(vector<string> &ans, int n, int open, int closed, string curr_str)
{

    // base case
    if (curr_str.size() == n * 2)
    {
        ans.push_back(curr_str);
        return;
    }

    if (open < n)
        func(ans, n, open + 1, closed, curr_str + "(");
    if (closed < open)
        func(ans, n, open, closed + 1, curr_str + ")");
}

vector<string> generateParanthesis(int n)
{
    vector<string> ans;

    func(ans, n, 0, 0, "");

    return ans;
}

int main()
{
    // Your code here
    int n;
    cin >> n;
    vector<string> s;
    s = generateParanthesis(n);

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}