#include <bits/stdc++.h>
using namespace std;
int sumRow(vector<vector<int>>arr,int n,int m)
{
int sum=0;
for(int i=0; i<m; i++)
sum+=arr[n][i];
return sum;
}

int sumCol(vector<vector<int>>arr,int n,int m)
{
    int sum=0;
    for(int j=0; j<n; j++)
    {
        sum+=arr[j][m];
    }
    return sum;
}
bool sumOfRowCol(vector<vector<int>>arr,int n,int m)
{ 
    if(sumRow(arr,0,m)!=sumCol(arr,n,0))
    return 0;
    
    return 1;
}

// method 2  
// int sumOfRowCol(vector<vector<int>>arr,int n,int m)
// {
//  for(int i=0; i<min(n,m); i++) {
//             int sum = 0;
//             for(int j=0; j<M; j++)  sum += arr[i][j];
//             for(int j=0; j<N; j++)  sum -= arr[j][i];
//             if(sum != 0)  return false;
//         }
//         return 1;
// }
int main() {
    // Your code here
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
// cout<<"Fine"<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
cout<<sumOfRowCol(arr,n,m);

// int main() {

    return 0;
}