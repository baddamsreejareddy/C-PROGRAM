#include<stdio.h>
int main()
{
  int a,b,*ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
printf("enter value for a:");
scanf("%d",&a);
printf("enter value for b:");
scanf("%d",&b);
printf("ptr1=%d,ptr2=%d",ptr1,ptr2);
printf("\ndifference= %d",ptr1-ptr2);
return 0;
}
