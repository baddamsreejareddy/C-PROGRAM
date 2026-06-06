#include<stdio.h>
int main()
{
  int a,b,*ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
printf("ptr1=%d,ptr2=%d",ptr1,ptr2);
if(ptr1>ptr2)
{
printf("\nptr1 is greatest");
}
else
{
printf("\nptr2 is greatest");
}
  return 0;
}
