#include<stdio.h>
void main()
{
	int num1,num2,num3,num4,ans;
	
	num1 = 10;
	num2 = 22;
	num3 = 12;
	num4 = 15;
	
    ans = num1+num2+num3+num4;
    printf("\n %d + %d + %d + %d = %d",num1,num2,num3,num4,ans);
	ans = num1-num2-num3-num4;
	printf("\n %d - %d - %d - %d = %d",num1,num2,num3,num4,ans);
	ans = num1*num2*num3*num4;
	printf("\n %d * %d * %d * %d = %d",num1,num2,num3,num4,ans);
	ans = num1/num2/num3/num4;
	printf("\n %d / %d / %d / %d = %d",num1,num2,num3,num4,ans);
    	
}