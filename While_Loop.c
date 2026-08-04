/* While Loop
Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
A number ends with digit d if its last digit is d.

Example 1
Input: d = 1
Output: 12300
Explanation:
The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
Their sum is 12300.

Example 2
Input: d = 5
Output: 12500  */

#include<stdio.h>
int main()
{
  int d, count = 0, sum = 0, num = 1;
  printf("Enter a digit (0-9): ");
  scanf("%d", &d);
  
  while(count < 50)
  {
    if(num % 10 == d)
    {
      sum += num;
      count++;
    }
    num++;
  }
  
  printf("Sum of the first 50 positive integers ending with %d is: %d", d, sum);
}