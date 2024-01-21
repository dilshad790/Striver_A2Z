#include<iostream>
using namespace std;
class Hero{
private:
int health;
public:
char level;
int gethealth()
{
    return health;
}
void sethealth(int h)
{
    health=h;
}


};
int main()
{
    Hero obj;
    obj.sethealth(70);
    cout<<obj.gethealth();
 return 0;
}