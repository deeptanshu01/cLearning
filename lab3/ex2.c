#include<stdio.h>
int main(void)
{
   int a,b,c,d;
   printf("enter 4 intergral values: \n");
   scanf("%d %d %d %d",&a,&b,&c,&d);
  int k=a;
  if(b>=k)
   k=b;
  if(c>=k)
   k=c; 
  if(d>=k)
   k=d; 

  printf("%d is the greatest",k);
    
return 0;
}