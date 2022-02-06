#include<stdio.h>
int main(void)
{
    printf("\nHello World\n");
    int x=10;
    int y=30;
    printf("%d\n",x+y);
    printf("%d\n",x-y);
    printf("%d\n",x*y);
    return 0;
}
void deleter(float arr[],int n)
{
    int k,x,y;
    int m=n-1;
    printf("Enter s.no. of book to be removed\n");
    scanf("%d",&y);
    for(k=y;k<=n;k++)
    {
        arr[k]=arr[k+1];
        
    }
    bubblesort(arr,m);
    printf("New sorted order is\n");
    
    
    
}