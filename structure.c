#include<stdio.h>
struct Student
{
  int roll;
  char name[20];
  float marks;
};
struct Student s[9];

int main()
{
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  { printf("Student %d:\n", i + 1);
    printf("Enter name: ");
    scanf("%s", s[i].name);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
  }
  
  printf("---Student Details---\n");
  for (int i = 0; i < n; i++)
  { printf("Student %d:\n", i + 1);
    printf("Name: %s\n", s[i].name);
    printf("Roll number: %d\n", s[i].roll);
    printf("Marks: %.2f\n", s[i].marks);
  }
}
