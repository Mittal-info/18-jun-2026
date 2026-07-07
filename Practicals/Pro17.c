#include<stdio.h>
void main()
{
/*
Expected output : 
hi, _______ your subject is ___________ and your score is _________ .
you are _____ years old now. 
Do you want to continue ? press 'y' for yes and press 'n' for no
and your choice is : _________ . 
*/
       char name[20];
       char sub[20];
       int score;
       int age;
       char choice;
         
          printf("Enter your name");
          scanf("\n %s",&name);
          printf("\nEnter your subject");
          scanf("\n %s",&sub);
          printf("\nEnter your score");
          scanf("\n %d",&score);
          printf("\nEnter your age");
          scanf("\n %d",&age);
          printf("\nEnter your choice");
          scanf("\n %c",&choice);
          
          printf("hi,%s your subject is %s and your score is %d.\n you are %d years old now.\n your choice is %c",name,sub,score,age,choice);
          
       

}