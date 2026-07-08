#include<stdio.h>
void main()
{
	int row;
	int col;
	int num = 1;
	
	for(row=1;row<=5;row++)//outer loop
	{
		for(col=1;col<=row;col++)//inner loop
		{
			printf("%d",num);
			num++;
			//num+=2;even
		}
		printf("\n");
	}
}