/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int no2, int no1);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int minimum(int no2, int no1)
{
  int min;
   if(no1<no2)
   {
     min= no1;
   }
   else if(no2<no1)
   {
      min = no2;
   }
   else
   {
     printf("Number are equal");
   }
   return min;
}
int maximum(int no1, int no2)
{
   int max;
   if(no1>no2)
   {
     max= no1;
   }
   else if(no2>no1)
   {
     max=no2;
   }
   else{
     printf("NUmber are equal");
   }
   return max;
}
int multiply(int no1 , int no2)
{
  int mul;
  mul = no1 * no2;
  return mul;
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d \n", minimum(no1, no2));
   printf("%d \n", maximum(no1, no2));
   printf("%d \n", multiply(no1, no2));
   return 0;
}
