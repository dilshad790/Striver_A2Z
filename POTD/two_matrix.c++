#include <bits/stdc++.h>
using namespace std;

    // Your code here
     void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
       int row[] = new int[matrix.size()];
        int col[] = new int[matrix[0].size()];
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 1){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }
    }




    
    int main()
    {
vector<vector<int>>v={{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}};

              cout<<v.size();


    return 0;
}