// #include <bits/stdc++.h>
// using namespace std;
// // const int N=1e3;
// int main() {
//     // Your code here
// const int N=1e3;
// int n;
// cin>>n;
// // int *arr=new int[n*n];
// int arr[n][n];
// for(int i=0; i<n; i++)
// {
//     for(int j=0; j<n; j++)
//     {
//         cin>>arr[i][j];
//     }
// }

// int q;
// cin>>q;
// while(q--)
// {
// int a,b;
// int c,d;
// cin>>a>>b;
// cin>>c>>d;
// long long sum=0;
// for(int i=a; i<=c; i++)
// {
//     for(int j=b; j<=d; j++)
//     {
// sum+=arr[i][j];
//     }
// }
// cout<<sum<<endl;

// }

// // T.C-O(n2) +O(n2)
//     return 0;
// }

//  T.c-O(n2) *(q*n2) // that can cause a problem beacause n=1e5 so total t.c=1e5+1e3*1e3 which can exexecute at 1sec

// BETTER Approach

// USE PREFIX SUM


#include <bits/stdc++.h>
using namespace std;
const int N=1e3;
long long pf[N][N];
int arr[N][N];
int main() {
    // Your code here
    int n;
    cin>>n;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=n; j++)
    { cin>>arr[i][j];
    pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        
    }
}

int q;
cin>>q;
while(q--)
{
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;
    cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
}

// T.C-O(n)+O(q)
    return 0;
}