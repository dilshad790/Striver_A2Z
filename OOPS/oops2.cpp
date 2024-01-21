#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
public:
char level;
int x;
};
int main()
{
    Hero Ramesh;
    // Think bts actual me size kitna hona chahie 5 bt 8 ho raha h 
    cout<<sizeof(Ramesh);
 return 0;
}