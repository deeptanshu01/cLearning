#include<stdio.h>
int main(void)
{
  int a;
  int b= 1;
  char c= 'A';
  printf("enter no. of rows \n");
  scanf("%d",&a);
  for(b=1;b<=a;b++,c++)
  { 
      for(b=1;b<=a;b++,c++)
      {
        printf("%c ",c);
      }
    printf("\n");
  }

return 0;
}