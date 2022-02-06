#include<stdio.h>
void arrayread(float arr[],int n);
void swap(float *x,float *y);
void bubblesort(float arr[],int n);
void adder(float arr[],int n);
void deleter(float arr[],int n);
int maxchecker(float arr[],int n);
int minchecker(float arr[],int n);
int main()
{  
    int n,k,max,min;
    char edit;
    float a[100];
    printf("Enter the number of books currently\n");
    scanf("%d",&n);
    arrayread(a,n);
    bubblesort(a,n);
     printf("sorted order is \n");
    for(k=0;k<=n;k++)
    {
        printf("%d. %f \n",k,a[k]);
    }
    printf("\nInitiate new command\nPress a to enter a new book\nPress d to delete a book\nPress l to check book prices below 150\nPress h to check book prices above 1550 \n");
    scanf(" %c",&edit);
    switch(edit)
    {
        case 'a':
        adder(a,n);
        break;
        case 'd':
       deleter(a,n);
        break;
        case 'l':
        min= minchecker(float arr[],int n);
        printf("%d books below 150",min);
        break;
        case 'h':
        max = maxchecker(a,n);
        printf("%d books above 1550",max);
        break;
        default:
        printf("INVALID INPUT");
        break;
    }

    return 0;
}
void arrayread(float arr[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("enter price of book num%d: ",i);
        scanf("%f",&arr[i]);
    }
}
void swap(float *x,float *y)
{
    float k;
    k=*x;
   *x=*y;
    *y=k;
}
void bubblesort(float arr[],int n)
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
void adder(float arr[],int n)
{    
    int k;
    printf("Enter price of new book\n");
    scanf("%f",&arr[n+1]);
    bubblesort(arr,n+1);
    printf("New sorted order is\n");
    for(k=0;k<=n+1;k++)
    {
        printf("%d. %f ",k,arr[k]);
    }
    
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
    for(k=0;k<=n-1;k++)
    {
        printf("%d. %f \n",k,arr[k]);
    }  
}
int maxchecker(float arr[],int n)
{   
    int k,count=0;
    for(k=0;k<=n;k++)
    {
        if(arr[k]>1550)
        count++;
        
    }
    return count;
}
int minchecker(float arr[],int n)
{   
    int k,count=0;
    for(k=0;k<=n;k++)
    {
        if(arr[k]<150)
        count++;
        
    }
    return count;
}