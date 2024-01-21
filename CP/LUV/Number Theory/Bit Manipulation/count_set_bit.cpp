#include <bits/stdc++.h>
using namespace std;


int main() {
    // Your code here
    vector<vector<int>>v;
    int row,col;
    cin>>row>>col;

for(int i=0; i<row; i++)
{
    for(int j=0; j<col; j++)
    cin>>v[i][j];
}

cout<<v[0][0]<<endl;

    return 0;
}