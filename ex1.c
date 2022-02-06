#include<stdio.h>
float sumseries(float x, int n)
{
    int i,j,k=1,l=1,m=1;
    float h=0;
    for(i=1;i<=(2*n-1);i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            k=k*x;
            l=l*j;
        }
        h=h+(float)k*m/(float)l;
        m=-1*m;
    }
    return h;
}
int main()
{
    int n;
    float x,y;
    printf("enter angle\n");
    scanf("%f",&x);
    printf("enter n\n");
    scanf("%d",&n); 
    y=sumseries(x,n);
    printf("sum of series is %f",y);

    return 0;
}