#include<stdio.h>
void main()
{
	int i;
	int num;
	int sum=0;
	
	 while(i<=5)
	 {
	 	printf("enter number");
	 	scanf("%d",&num);
	 	sum+=num;
	 	i++;
	 }
	 printf("\n sum = %d",sum);
	
}