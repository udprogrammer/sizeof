#include<stdio.h>

main()
{
	int a=10,b=20;
	int *p1,*p2,*p3;
	p1 = &a;
	p2 = &b;
	
	p3 = p1;
	p1 = p2;
	p2 = p3;
	
	printf("A = %d\n",*p1);
	printf("B = %d",*p2);
	
}
