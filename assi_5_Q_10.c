#include<stdio.h>
int main()
{
 int i=1,a;
 printf("enter a number:");
 scanf("%d",&a);
 while(i<11)
 {
  printf("%d X %d = %d\n",a,i,i*a);
  i++;
 }
 return 0;
}
