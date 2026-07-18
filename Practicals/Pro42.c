
/*
* * * * * 
* * * * * 
* * $ * * 
* * * * * 
* * * * * 
*/
#include <stdio.h>

int main()
{
    
    int row;
    int col;
    
         for(row=1;row<=5;row++)
         {
             for(col=1;col<=5;col++)
             {
                 if(row==3 && col==3)
                 {
                     printf("$");
                 }
                 else
                 {
                     printf("*");
                 }
                 
             }
             printf("\n");
             
         }
    return 0;
}