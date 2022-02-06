#include<stdio.h>
int main(void)
{ 
int n;
printf("Enter a 4 digit integral value:");
scanf("%d",&n);
printf("%d\n %d\n  %d\n   %d\n",n,n%1000,n%100,n%10);
  return 0;
  }