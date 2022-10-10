#include<stdio.h>
int main()
{
 int a=1,b;
 printf("enter a number: ");
 scanf("%d",&b);
 while(a<=2*b)
 {
 printf("%d\t",a);
 a=a+2;
 }
 return 0;
}
