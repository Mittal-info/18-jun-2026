#include<stdio.h>
void main()
{
	int age;
	int i;
	int eligible_counter = 0;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter your age %d:",i);
		scanf("%d",&age);
		
		if(age >= 18)
		{
			eligible_counter +=1;
			printf("\n eligible");
			
		}
		else
		{
				printf("\n not eligible");
		}
	}
	printf("\n total eligible :%d",eligible_counter);
	  
}
