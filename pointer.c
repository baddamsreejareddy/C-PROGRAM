#include<stdio.h>
int main()
{
int a,*ptr;
ptr=&a;
printf("enter value for a:");
scanf("%d",&a);
printf("ptr=%d",ptr);
ptr=ptr+6;
printf("ptr=%d",ptr);
return 0;
}
