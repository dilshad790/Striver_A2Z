#include <bits/stdc++.h>
using namespace std;
vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
      vector<int>ans;
        int i=0,j=0;
        while(j<m)
        {
            ans.push_back(matrix[i][j++]);
        }
        if(n==1) return ans;
        
        i=1;
        j=m-1;
        while(i<n)
        {
            ans.push_back(matrix[i++][j]);
        }
        
        if(m==1) return ans;
        
        i=n-1,j=m-2;
        while(j>=0)
        {
            ans.push_back(matrix[i][j--]);
        }
        
        i=n-2;
        j=0;
        while(i>0)
        {
            ans.push_back(matrix[i--][j]);
        }
        return ans;
    }

    void print(vector<int>&v)
    {
for(int i=0; i<v.size(); i++)
{
    cout<<v[i]<<" ";
}
    }
int main() {
    // Your code here
vector<vector<int>>v={
    {12, 11, 10, 9},
         {8, 7, 6, 5},
         {4, 3, 2, 1}
};
int row=v.size();
int col=v[0].size();
vector<int>v2;
v2=boundaryTraversal(v,row,col);
print(v2);

    return 0;
}