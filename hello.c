#include <stdio.h>
int expon(int n,int x);
int main()
{
   int k;
   k=expon(3,2);
   printf("%d\n",k);
    return 0;
}
int expon(int n,int x)
{
    if(n==0)
    return 1;
    else return x*expon(n-1,x);
}