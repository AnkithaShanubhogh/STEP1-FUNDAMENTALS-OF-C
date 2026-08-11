#include<stdio.h>
int main()
{
  int a[5]={1,2,3,4,5};
  int i;
  int *p;
  p = a;
  /*printing all a[i] elements*/
  for(i=0;i<5;i++)
  {
    printf("%d\n",p[i]);

  }
  /*printing all a[i] elements*/
  for(i=0;i<5;i++)
  {
    printf("%d\n",a[i]);

  }
}
