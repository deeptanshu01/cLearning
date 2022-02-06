#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int row=1,i,j,k;

for(i=1; i<=rows; i++)
{    
    for(j=1; j<=rows-i; j++){
      printf(" ");
}
for(k=1; k<=i; k++)
{
      printf("%d",k);
      printf(" ");
}
printf("\n");
}

for(i=1; i<=rows; i++)
{  
    for(j=1; j<=i; j++){
      printf(" ");
}
for(k=1; k<=rows-i; k++){
      printf("%d",k);
      printf(" ");
}
printf("\n");
}
return 0;
    }