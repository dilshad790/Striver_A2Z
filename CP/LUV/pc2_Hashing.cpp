/*Given array a of N integers .Given Q queries and  in each query given a number x,print count of that number in array

Constraints
1<=N<=1e5
1<=a[i]<=1e7
1<=Q<=1e5

*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// Your code here
// M1-T.c-O(N square)
// int n;
// cin >> n;

// int arr[n];
// for (int i =0; i < n; i++)
// {
//     cin >> arr[i];
// }
// int q;
// cin >> q;
// while (q--)
// {
//     int x;
//     cin>>x;
//     int cnt=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==x)
//         cnt++;
//     }
//     cout<<cnt<<endl;
// }
// return 0
// }

// Using Hash array
// T.C-O(N)+O(t)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int mpp[N];
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {

        int x;
        cin >> x;
        cout << mpp[x] << endl;
    }

    return 0;
}