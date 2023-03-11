/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
 
int main() 
{
    float num1, num2;
    float avg = 0;
     
    printf("Enter num1 : "); //enter number1
    scanf("%f", &num1);
    
    printf("Enter num2 : "); //enter number2
    scanf("%f", &num2);
     
    avg = (num1 + num2) / 2; //calculate avg
    printf("Average : %.2f\n", avg);
     
    return 0;
  }