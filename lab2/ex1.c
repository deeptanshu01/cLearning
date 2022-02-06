#include<stdio.h>
int main(void)
{
  int dob, birth_month, birth_year;
  printf("Enter Date of Birth in the format dd:mm:yyyy ");
  scanf("%2d:%2d:%4d",&dob,&birth_month,&birth_year);
  printf("day of birth %d\n",dob);
  printf("month of birth %d\n",birth_month);
  printf("year of birth %d\n",birth_year);
return 0;
}