#include<stdio.h>
void main()
{
	int i;
	int num;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter a number:");
		scanf("%d",&num);
		
		if(num % 2 == 0)
		{
			printf("\n %d even",num);
		}
		else
		{
				printf("\n \t%d odd",num);
		}
     }
}