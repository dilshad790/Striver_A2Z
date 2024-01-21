// generate valid paranthesis

#include <bits/stdc++.h>
using namespace std;
void generate_paranthesis(vector<string>&ans,string &s,int open,int close)
{
    if(open==0 && close==0)
    {
        // cout<<s;
ans.push_back(s);
    return ;

    }

    if(open>0)
    {
        s.push_back('(');
        generate_paranthesis(ans,s,open-1,close);
                s.pop_back();
    }

    if(close>0)
    {
        if(open<close)
        {
            s.push_back(')');
            generate_paranthesis(ans,s,open,close-1);
            s.pop_back();

        }
    }
    // return ans;
}
int main() {
    // Your code here

    int n;
    cin>>n;
    vector<string>ans;
    string s;
    generate_paranthesis(ans,s,n,n);

for(auto row:ans)
{
cout<<row;
}

    return 0;
}