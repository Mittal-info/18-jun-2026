// swap two values without using 3rd variable  

#include<stdio.h>
void main()
{
	int A,B;
	A = 20;
	B = 10;
	
	//----Before swapping----
	printf("\n A = %d",A);
	printf("\n B = %d",B);
	
	A = A + B;// A = 10 + 20    A = 30 
    B = A - B;  // B = 30 - 20    B = 10 
    A = A - B;  // A = 30 - 10    A = 20 
    
    //----After swapping----
	printf("\n A = %d",A);
	printf("\nB = %d",B);
	
}