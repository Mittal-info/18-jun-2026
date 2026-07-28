#include<stdio.h>
void main()
{
     FILE *fp;
     fp = fopen("myfile.txt","w");
     
     fprintf(fp,"\n hello welcome to file handling \n");
     fprintf(fp,"\n this is my first file");
     
     fclose(fp);
}
