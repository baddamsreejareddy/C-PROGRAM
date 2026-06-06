#include<stdio.h>
int main()
{
  int a,b,*ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
printf("enter the value for a:");
scanf("%d",&a);
printf("\nenter the value for b:");
scanf("%d",&b);
ptr1=ptr1-4;
printf("\n%d",ptr1);
ptr2=ptr2-7;
printf("\n%d",ptr2);
return 0;
}
