#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        unordered_set<int> s;
        while (n--)
        {

            int a, x;
            cin >> a >> x;
            if (a == 1)
                mini = min(x, mini);
            else if (a == 2)
                maxi = max(x, maxi);
            else
                s.insert(x);
        }
        int cnt = maxi - mini + 1;
        for (int i = mini; i <= maxi; i++)
        {
            if (s.find(i) != s.end())
                cnt--;
        }
        cout << cnt;
    }
    // }
    return 0;
}