#include<stdio.h>
int main()
{
  int a,*p;
p=&a;
printf("p=%d",p);
p++;
printf("\np=%d",p);
p--;
printf("\np=%d",p);
return 0;
}
