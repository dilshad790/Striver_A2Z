#include <bits/stdc++.h>
using namespace std;
string removeChars(string string1, string string2) {
        // code here
        for(int i=0; i<string2.size(); i++)
        {
            
            for(int j=0; j<string1.size(); j++)
            {
                if(string2[i]==string1[j])
                // string1[j]='1';
                string1[j]=0;
            }
        }
        // cout<<string1<<endl;
        // string s3;
        // for(int i=0; i<string1.size(); i++)
        // {
        //     if(string1[i]!='1')
        //     s3.push_back(string1[i]);
        // }
        
        // return s3;
        return string1;
    }

int main() {
    // Your code here
    string string1;
    cin>>string1;
    string string2;
    cin>>string2;

// cout<<string2.size()<<endl;
    string s=removeChars(string1,string2);
    cout<<s;

    return 0;
}