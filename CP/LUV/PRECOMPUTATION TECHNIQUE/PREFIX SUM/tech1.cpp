// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// int arr[N];
// method 1 T.c-O(N)+O(Q*N)->10^10
// int main() {
//     // Your code here
// int n;
// cin>>n;
// for(int i=1; i<=n; i++)
// {
//     cin>>arr[i];
// }

// int q;
// cin>>q;
// while(q--)
// {
//     int l,r;
//     cin>>l>>r;
//     long long sum=0;
//     for(int i=l; i<=r; i++)
//     {
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
// }
//     return 0;
// }

// method 2 Using prefix sum
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];

int pf[N];
int main() {
    // Your code here
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        pf[i]=pf[i-1]+arr[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0;
}
