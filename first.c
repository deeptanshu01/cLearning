#include<stdio.h>
int digisum( int n);
int main()
{
  int n,k;
  printf("enter num\n");
  scanf("%d",&n);
 k = digisum(n);
 printf("%d is sum of digits of %d",k,n);

  return 0;
}

int digisum(int n)
{
  int i,rem,sum=0;
  while(n!=0)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
  }
 return sum;
}