#include<stdio.h>
int main (void)
{
   char operator;
   int a,b;
   printf("enter two integral values: \n");
   scanf("%d %d",&a,&b);
   printf("enter operator(+ - * /): \n");
   scanf(" %c",&operator);
switch(operator)
    {  case '+':
      printf("output: %d",a+b); 
      break;
       case '-':
      printf("output: %d",a-b); 
      break;
       case '*':
      printf("output: %d",a*b); 
      break;
       case '/':
            switch(b)
          {  
              case 0:
              printf("ERROR:Can't divide by 0");
              break;
              default:
              printf("output: %d",a/b);
              break;


          }              
      break;
    default:
    printf("INVALID OPERATOR");
    break;
    }

    return 0;
}