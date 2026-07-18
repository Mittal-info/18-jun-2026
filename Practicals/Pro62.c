#include<stdio.h>
void main()
{
	int choice;
	printf("\n Addition");
	printf("\n Substraction");
	printf("\n multiplication");
	printf("\n Division");
	
	printf("Enter your choice : ");
    scanf("%d",&choice);
    
     switch(choice)
     {
     	case 1:
     		addition();
     		break;
	 }
	 
}
void addition()
{
	int num1,num2,ans;
	printf("Enter number 1:");
	scanf("%d",&num1);
	printf("Enter number 2:");
	scanf("%d",&num2);
	ans=num1+num2;
	 printf("\n Addition = %d",ans);
}