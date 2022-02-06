#include <stdio.h>
int main()
{
    int n;
    printf("Enter Num\n");
    scanf("%d", &n);
    int c = n / 2 + 1;
    int d = 0;
    d = n - 2;
    for (int i = 1; i <= c - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int k = d-1 ; k >= 0; k-- )
        {
            printf("-");
        }

        printf("*");
        printf("\n");
        d-=2;
    }
    for (int i = 1; i <= c; i++)
        printf(" ");
    printf("*\n");
    d=1;
    for (int i = c-1 ; i >= 1 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int k = d-1 ; k >= 0; k-- )
        {
            printf("-");
        }

        printf("*");
        printf("\n");
        d+=2;
    }
    return 0;
}