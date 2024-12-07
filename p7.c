/*Write a program in C that calculates the absolute value and square root value of a user provided input
N.*/




#include <stdio.h>
#include <math.h>


int main(void)


{
   float N,a,s;
   printf("Enter the value of N :") ;
   scanf("%f", &N);



   a=fabs(N);
   s=sqrt(N);


   printf("The absolute value of %.2f is %.2f and The squre value is %.2f is %.2f \n :",  N,s, a);







    return 0;
}
