#include<stdio.h>
void arrayread(int arr[],int n);
void swap(int *x,int *y);
void bubblesort(int arr[],int n);
int binarySearch(int array[], int x, int low, int high);
int main()
{   
    int a[100];
    int n,k,x;
    printf("enter size of array\n");
    scanf("%d",&n);
    arrayread(a,n);
    bubblesort(a,n);
    printf("sorted order is \n");
    for(k=0;k<=n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n initiating binary search...\n");
    printf("Enter number\n");
    scanf("%d",&x);
    int result = binarySearch(a, x, 0, n);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);

    return 0;
}
void arrayread(int arr[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("enter num%d: ",i);
        scanf("%d",&arr[i]);
    }
}
void swap(int *x,int *y)
{
    int k;
    k=*x;
   *x=*y;
    *y=k;
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}
int binarySearch(int array[], int x, int low, int high) 
{
    while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
