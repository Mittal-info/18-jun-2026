#include<stdio.h>
void main()
{
 
    int i;
    char name[20];
    FILE *fp;
    
     fp=fopen("record.txt","a");
     
      for(i=1;i<=5;i++)
      {
      	printf("enter name:");
      	gets(name);
      	fprintf(fp,"\n Name:%s",name);
	  }
	  fclose(fp);

}