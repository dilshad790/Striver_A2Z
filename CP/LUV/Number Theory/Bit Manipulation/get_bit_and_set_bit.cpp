#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    
    int n=5;
    int position=2;
    // setp1 
    int mask=1<<(position);
    // step2
    int ans=n&mask;
if(ans!=0)
cout<<1<<endl;
else cout<<0<<endl;

// set bit-1 at given poosition
cout<<(n|(1<<position))<<endl;

// clrear bit->set 0 at given position
int x=1<<position;
int ones_complement=~x;
int ans2=ones_complement&n;
cout<<ans2<<endl;

// upadte bit 
// step1 perform clear bit
//  step2 perform set bit

int n2=5;
int pos=1;
int value=1;
// step 1 -clear bit
int mask2=1<<pos;
int ones_complement2=~mask2;
 n2=(ones_complement2 & n2);

// set bit
cout<<(n2 | (value<<pos));


    return 0;
}
