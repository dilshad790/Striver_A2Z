#include <bits/stdc++.h>
using namespace std;
 bool checkRecord(string s) {
        int a=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
            a++;

        }
        bool late=false;
         for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L' && s[i+1]=='L' && s[i+2] =='L')
            {
            return false;

            }
            // cout<<s[i]<<" "<<s[i+1]<<s[i+2]<<endl;

        }
return true;

    }
int main() {
    // Your code here

string s;
cin>>s;

cout<<checkRecord(s);

    return 0;
}