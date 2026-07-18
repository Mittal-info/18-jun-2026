/* coupon code : 5
 coupon code : 4
 coupon code : 3
 coupon code : 2
 coupon code : 1
sorry ! coupon is over now !*/
#include<stdio.h>
void main()
{
    int coupon = 5; // initlization 
    while (coupon >= 1) // condition 
    {
        printf("\n coupon code : %d",coupon); // statement 
        // updation;
        coupon--;
    } 
    printf("\nsorry ! coupon is over now !");
    
}