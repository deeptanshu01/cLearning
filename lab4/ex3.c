#include<stdio.h>
int main(void)
{
  int bal,val;
  char input;
  printf("Enter balance: \n");
  scanf("%d",&bal);
  do{
  printf("Enter options in correct format: \n");
  scanf(" %c%d",&input,&val);
  switch(input){
    case 'A': bal=val+bal;
    printf("Balance is %d",bal);
    break;
    case 'S': bal=bal-val;
    printf("Balance is %d",bal);
    break;
    case 'E': printf("Exiting...");
    default:break;
  }
}
  while(input != 'E');

    return 0;
}