#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum = 1;
        for (int i = 0; i < v.size(); i++)
        {
            sum *= v[i];
        }

        int digit = sum % 10;
        if (digit == 2 || digit == 3 || digit == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}