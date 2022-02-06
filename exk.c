#include<stdio.h>
int main(void)
{
   int a[100],n,b,gcd,i,j,k;
   for(i=0;i<100;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]<0)
       {break;}
   }
   int min=a[0];
   gcd=1;
   for(j=1;j<i+1;j++)
   {
       if(a[j]<min)
       {
           min=a[j];
       }
   }
   int flag=0;
   for(k=min;k>0;k--)
   {
       for(j=0;j<i+1;j++)
       {
           if(a[j]%k!=0)
           {
               flag=1;
           }
       }
       if(flag==0)
       {
           gcd=k;
           break;
       }
       flag=0;
   }
   printf("\n GCD is %d",gcd);

   return 0;
}