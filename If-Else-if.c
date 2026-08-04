/* If ElseIf
Subscribe to TUF+

Hints
Company
Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise. */


#include<stdio.h>

int main()
{
  int marks;
  printf("Enter marks: ");
  scanf("%d", &marks);
  if(marks >= 90)
  {
    printf("Grade A");
  }
  else if(marks >= 70)
  {
    printf("Grade B");
  }
  else if(marks >= 50)
  {
    printf("Grade C");
  }
  else if(marks >= 35)
  {
    printf("Grade D");
  }
  else
  {
    printf("Fail");
  }

}
