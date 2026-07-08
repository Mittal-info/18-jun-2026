#include<stdio.h>
void main()
{
	int row;
	int col;
	
	for(row=1;row<=5;row++)//outer loop
	{
		for(col=1;col<=row;col++)//inner loop
		{
			printf("%d",col);
		}
		printf("\n");
	}
}