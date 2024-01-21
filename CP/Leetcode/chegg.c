#include<stdio.h>

// Training

void display (int x, int y)

{

int *ptr1 = &x, *ptr2 = &y; printf("%ld", ptr1 ptr2);

}

int main(){

display(30,40);

return 0;

}

