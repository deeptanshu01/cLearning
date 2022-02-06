#include<stdio.h>
int main(void)
{
  int x,y,z,n, a[100];
  printf("array size \n");
  scanf("%d",&n);
  
  for(x=0;x<=n;x++)
  {
      printf("enter element %d \n",x);
      scanf("%d",&a[x]);
  }
for(y=0;y<=n;y++)
{
    for(z=0;z<=y;z++)
    if(a[z]<a[y])
    {
    printf("%d",a[z]);
    }
}


    return 0;
}
