#include<stdio.h>//print the first N even natural numbers in reverse order
int main()
{
 int b;
 printf("enter a number:");
 scanf("%d",&b);
 while(b)
 {
 printf("%d\t",2*b);
 b--;
 }
 return 0;
}
