#include <iostream>
using namespace std;
string  check(string s)
{ string s1=s;
if(s=="abc")
return "YES";
else{
    for(int i=0; i<s.size(); i++)
    {  
        for(int j=i+1; j<s.size(); j++)
        {
 swap(s[i],s[j]);
 if(s=="abc")
 return "YES";
 s=s1;
 break; 
        }
    }

}
    return "NO";
}

int main() {
    
int t;
cin>>t;
while(t--) 
{
    string s;
    cin>>s;
   cout<<check(s)<<endl;

}

    return 0;
} 