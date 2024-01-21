// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e6;
// int mpp[N];
// int main()
// {
//     // Your code here
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         mpp[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int dif = k - arr[i];
//         if (mpp[dif] == 1)
//         {
//             cout << " Yes" << endl;
//             break;
//         }
//         else if (i == n - 1 && mpp[dif] == 0)
//         {

//             cout << "No" << endl;
//             break;
//         }
//     }
//         // cout<<" No"<<endl;
//         return 0;
//     }

#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
const int N = 1e6 + 10;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        if (m[k - a[i]])
        {
            cout << "YES" << nl;
            return 0;
        }
        m[a[i]] = 1;
    }
    cout << "NO" << nl;
    return 0;
}