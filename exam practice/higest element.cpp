#include<stdio.h>
int main()
{
	int a[5],i,big;
	printf("Enter number:");
for(i=0; i<5; i++)
{
	scanf("%d",&a[i]);

	}
	
	big=a[0];
	for(i=1; i<5; i++)
	{
	if(big<a[i])
	{
		big=a[i];
	}
	
}
printf("the highest no. is %d",big);
}
