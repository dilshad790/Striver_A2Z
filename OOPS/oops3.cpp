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
Hero *b=new Hero;
b->sethealth(70);
cout<<(*b).gethealth()<<endl;
cout<<b->gethealth()<<endl;
 return 0;
}