/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
    int sub1,sub2;
    float avg;

      printf("Enter the Sub1 :");
      scanf("%d", &sub1);

      printf("Enter the sub2 :");
      scanf("%d", &sub2);

      avg = (sub1 + sub2)/2;
      printf("Average of marks in subjects : %.2f", avg);
       
  return 0;
}

