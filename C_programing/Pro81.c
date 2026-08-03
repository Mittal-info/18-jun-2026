#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	int marks[5];
	char name[20];//array within a structure
}s1[3];//array of structure
void main()
{
	int stud_loop,marks_loop;
	int i,j;
	for(stud_loop=0;stud_loop<3;stud_loop++)
	{
		printf("\n------student %d details -----",stud_loop+1);
		printf("\n Enter Id:");
		scanf("%d",&s1[stud_loop].id);
		getchar();
		printf("\n Enter name:");
		gets(s1[stud_loop].name);
		  
		   for(marks_loop=0;marks_loop<5;marks_loop++)
		   {
		   	  printf("\n\t\t Subject %d marks:",marks_loop+1);
		   	  printf("enter marks:");
		   	  scanf("%d",&s1[marks_loop].marks);
		   }
	}
	
	  printf("\n --------All student details--------\n\n");
	for(i<0;i<3;i++)
	{
		printf("\n student information:",i+1);
		printf("\n ID:%d",s1[i].id);
		printf("\n Name:%s5",s1[i].name);
		
		  for(j=0;j<5;j++)
		  {
		  	printf("\n\t\t Subject %d ",j+1);
		  	printf("marks %d",s1[i].marks[j]);
		  }
	}
	
}