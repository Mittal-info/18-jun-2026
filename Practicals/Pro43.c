#include<stdio.h>
void main()
{
	//Nested for loop
	int row;
	int col;
	
	for(row=1;row<=5;row++)//outer loop
	{
		for(col=1;col<=5;col++)//inner loop
		{
			printf("*");
		}
		printf("\n");
	}
	
}