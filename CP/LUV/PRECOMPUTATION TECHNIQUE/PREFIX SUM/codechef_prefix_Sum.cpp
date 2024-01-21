// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // Your code here

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         int arr[n + 10];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> arr[i];
//         }

//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;

//             int gcd = 0; // gcd 0 with another number is 0

//             for (int i = 1; i < l; i++)
//             {
//                 gcd=__gcd(gcd,arr[i]);
//             }

//              for (int i = r+1; i <=n; i++)
//             {
//                 gcd=__gcd(gcd,arr[i]);
//             }
// cout<<gcd<<endl;
//         }
//     }

//     return 0;
// }

// T.C-> O(t)+O(N*Q*N*)

// Using prefix Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int arr[n + 10];

        int forward[n + 10];
        int backward[n + 10];

        forward[0] = backward[n + 1] = 0;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        for (int i = 1; i <= n; i++)
            forward[i] = __gcd(forward[i - 1], arr[i]);

        for (int i = n; i >= 1; i--)
            backward[i] = __gcd(backward[i + 1], arr[i]);

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
        }
    }

    return 0;
}
