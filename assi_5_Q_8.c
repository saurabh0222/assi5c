#include<stdio.h>
int main()
{
 int i=1,b;
 printf("enter a number:");
 scanf("%d",&b);
 while(i<=b)
 {
  printf("square of %d is: %d\n",i,i*i);
  i++;
 }
 return 0;

}
