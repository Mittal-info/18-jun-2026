/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>
void main()
{
	int i;
	int num;
	
	for(i=1;i<=5;i++)
	{
		for(num=1;num<=5;num++)
		{
			printf("%d",num);
		}
		printf("\n");
	}
}