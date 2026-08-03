/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

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
   	  	
   	  	printf("%d",num);
   	  	
	  }
	  printf("\n");
   }
}