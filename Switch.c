/*  Switch Case
Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.
Ensure only the 1st letter of the answer is capitalised.
input: day=1;
output: Monday; */

#include<stdio.h>
int main()
{
  int day;
  printf("Enter day number: ");
  scanf("%d", &day);
  switch(day)
  {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
      printf("Invalid");
  }
}