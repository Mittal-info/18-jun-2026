#include<stdio.h>
#include<string.h>
void main()
{
    char username[20] = "mittal";
    char db_email[20]= "mittal@1234";
    char db_password[20]= "1234";
    
    char email[20];
    char password[20];
    
    printf("enter your email");
    scanf("%s",&email);
    
    if(strcmp(db_email,email)==0)
    {
    	printf("enter your password");
        scanf("%s",&password);
        
         if(strcmp(db_password,password)==0)
		 {
         	 printf("welcome %s",username);
		 }
		 else
		 {
		 	printf("invalid password");
		 }
	}
	else
	{
			printf("invalid email");
	}
}