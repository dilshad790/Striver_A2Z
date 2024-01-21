// problem link
//  https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/

#include <iostream> 
#include<vector>
using namespace std;
bool check(string s)
{
    vector<int> v(26);
    // Creat vector for storing count    
    for(auto x : s) v[x-'a']++;
    // storing count of characters in vector
    // x-1 because we have to insert the elements within vector. size of our vector is 26
    for (auto it : v)
    {
        if (it > 1)
            return 1;
        // checking count which is grater  than 1
    }
    return 0;
}
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = check(s);
        // calling the check function
        flag ? cout << "Yes" << endl : cout << "No" << endl;
        // printing results
    }
}