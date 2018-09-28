/*Addition of two integers.. */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num1;   /* first integer */
    int num2;   /* second integer */
    long long int sum;
    
    printf("Enter the first integer: ");  
    scanf("%i",&num1);                          /* Accepting the first integer. */
    
     printf("Enter the second integer: ");      
    scanf("%i",&num2);                           /* Accepting the second integer. */
    
    sum = (long long )num1 + num2;                        /* Calculating the addition. */ 
    
  printf("%d + %d = %lld ",num1,num2,sum);  
  
  return EXIT_SUCCESS;
    
}

