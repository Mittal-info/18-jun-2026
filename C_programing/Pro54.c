#include<stdio.h>
void main()
{
	int num,status;
	status = 1; // variable define 
	while(status==1);
	{
		printf("\n Enter number:");
		scanf("%d",&num);
		
		printf("\n Do you want to continue ? press '1' for yes and press '0' for no ");
		scanf("%d",&status);//updation
	}
	printf("Game over");
}