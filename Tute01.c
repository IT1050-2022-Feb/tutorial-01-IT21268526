/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() // main function
{
  float marks1, marks2, total, average=0;

  printf("Please Enter marks of subject 1: ");// Taking inputs
  scanf("%f", &marks1);

  printf("Please Enter marks of subject 2: ");
  scanf("%f", &marks2);

  total = marks1 + marks2;// calculations
  average = total/2;

  printf("The average is : %.2f", average);// Output

  return 0;
}

