#include<stdio.h>
void main()
{
    // expected output : 15 / 2 = 7.5; 
    
    float num1,num2,ans;
    num1 = 15;
    num2 = 2;
    
    ans = num1/num2;
    
    printf("\n %0.f / %0.f = %0.1f",num1,num2,ans);
}