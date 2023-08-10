#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<vector<int>>v1{{1, 2, 3},
        {4, 5,},
        {7, 8, 9}
        };

        // size of row
        int row=v1.size();
        cout<<row<<endl;
        int col=v1[1].size();
        cout<<col;
 return 0;
}