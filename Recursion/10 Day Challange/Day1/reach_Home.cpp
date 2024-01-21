#include <bits/stdc++.h>
using namespace std;
void reachHome(int src,int dest)
{
    cout<<"source "<<src<<" dest "<<dest<<endl;
    // base case 
    if(src==dest)
    {
        cout<<"Pahuch gaya";
        return;
    }
// processing - ek step le lia
    src++;

    reachHome(src,dest);
}
int main() {
    // Your code here
    int src,dest;
    cin>>src>>dest;

    reachHome(src,dest);
    return 0;
}