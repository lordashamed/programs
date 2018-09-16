#include<stdio.h>

 int main()
 {

   int num,n=0,fact;

   printf("Write the number here\n");
   scanf("%d",&num );

   for(n=1;n<=num;n++){
   fact=fact*n;}

   printf("The factorial is %d\n",fact );
   return 0;
}
//C program to calculate the factorial of a no.
