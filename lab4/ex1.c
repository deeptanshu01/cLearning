#include<stdio.h>
int main(void)
{ 
    int x,i,j;
   printf("Enter an integer: \n");
   scanf("%d",&x);
   for(i=x;i>1;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
  for(i=1;i<=x;i++)
  {
      for(j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
  }

    return 0;
}