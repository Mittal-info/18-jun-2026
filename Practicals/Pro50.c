#include<stdio.h>
void main()
{
     int row;
     int col;
     int num = 65;
     
     for(row=1;row<=5;row++)//outer loop
	{
		for(col=1;col<=row;col++)//inner loop
		{
			printf("%c",num);
		    num++;
		}
		printf("\n");
	}
}