/*
1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5 

*/
#include<stdio.h>
void main()
{
	int i;
	int num;
	for(i=1;i<=5;i++)
	{
		for(num=1;num<=i;num++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}