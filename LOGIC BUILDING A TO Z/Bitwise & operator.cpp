#include<iostream>
using namespace std;
int getBit(int num,int pos)
{
	return ((num&(1<<pos))!=0);
}

int setBit(int num ,int pos)
{
	return (num |(1<<pos));
}
int clearBit(int num,int pos)
{
	return(num&(~(1<<pos)));
}
int updateBit(int num, int pos,int value)
{
	int mask=~(1<<pos);
	num=num& mask;
	return (num|(value<<pos));
}
int main()
{// Q1-> get a bit of any postion
cout<<getBit(5,1)<<endl; // 0101-> ans 0 at pos 1
cout<<setBit(5,2)<<endl;//0101-> 0101
cout<<clearBit(5,3)<<endl;
cout<<updateBit(5,1,1);// 0101
}
