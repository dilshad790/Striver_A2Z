#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    string s;
    cin>>s;
    
set<char>st;
for(auto it:s)
st.insert(it);

int n=st.size();
if(n%2==0)
cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;

    return 0;
}