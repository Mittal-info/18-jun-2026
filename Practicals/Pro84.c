#include<stdio.h>
void main()
{
	int num=10;
	int *ptr=&num;
	printf("\n num = %d",num);
	printf("\n address=%p",num);
	
	printf("\n value of ptr:%d",*ptr);
	printf("\n address of ptr:%d",ptr);
}