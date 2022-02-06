#include<stdio.h>
int main (void)
 {
    int p;
    float a,b,c,d,e,f;
    printf("enter the precision value: ");
    scanf("%d",&p);
    a=5.0/9.0*(0-32);
    b=5.0/9.0*(20-32);
    c=5.0/9.0*(40-32);
    d=5.0/9.0*(60-32);
    e=5.0/9.0*(80-32);
    f=5.0/9.0*(100-32);
    printf("\nFahrenheit       Celsius");
    printf("\n   0            %.*f",p,a);
    printf("\n  20             %.*f",p,b);
    printf("\n  40              %.*f",p,c);
    printf("\n  60             %.*f",p,d);
    printf("\n  80             %.*f",p,e);
    printf("\n 100             %.*f",p,f);

    return 0;
}