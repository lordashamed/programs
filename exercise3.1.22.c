#include<stdio.h>

 int main()
 {

   int num,divisor;
   printf("Enter the no.\n");
   scanf("%d",&num );
  
   for (divisor=1;divisor<num;divisor++) {

     if ( num%divisor == 0 && divisor != 1 ){
     printf("It is not prime\n");break;}
     else;}
   return 0;
}
//C program to print the reverse of a number.
//wrong program
