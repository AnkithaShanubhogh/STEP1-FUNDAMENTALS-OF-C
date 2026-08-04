/* For Loop
Given two integers low and high, return the sum of all integers from low to high inclusive. */

#include<stdio.h>
int main()  
{
  int low, high, sum = 0;
  printf("Enter low and high values: ");
  scanf("%d %d", &low, &high);
  for(int i = low; i <= high; i++)
  {
    sum += i;
  }
  printf("Sum of integers from %d to %d is: %d", low, high, sum);

}