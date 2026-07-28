#include<stdio.h>
#include<conio.h>
struct address//nested structure
{
	int pincode;
	char city[20];
	char country[20];
	
};
struct student
{
	int id;
	char name[20];
	struct address addr;
};
struct employee
{
	int id;
	char name[20];
};
void main()
{
	  struct student s1;
	  
	    printf("\n Enter Id:");
	    scanf("%d",&s1.id);
	    
	    getchar();
	    
	    printf("\nEnter name:");
	    gets(s1.name);
	    
	    printf("\nEnter pincode:");
	    scanf("%d",&s1.addr.pincode);
	    
	    printf("\n Enter city:");
	    gets(s1.addr.city);
	    
	    printf("\n Enter country:");
	    gets(s1.addr.country);
	
}