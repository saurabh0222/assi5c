#include<stdio.h>
int main()
{
 int b;
 printf("enter a number:");
 scanf("%d",&b);
 while(b)
 {
 printf("%d\t",2*b-1);
 b--;
 }
 return 0;
}
