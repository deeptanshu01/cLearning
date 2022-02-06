#include <stdio.h>

int add(int x, int y)
{
  return x+y;
}

int subtract(int x, int y)
{
  return x-y;
}

int multiply(int x, int y)
{
  int result;
  /* Code goes here */
  int i;
  result=0;
  for(int i=1;i<=y;i=add(i,1))
  {
      result=add(result,x);
      
  }
  /* Code goes here */
  return result;
}

int divide(int x, int y)
{
  int result;
  /* Code goes here */
  result=0;
  while(x>=y)
  {
      x=subtract(x,y);
      result=add(result,1);
  }
  /* Code goes here */
  return result;
}

int squareroot(int x)
{
  int result;
  /* Code goes here */
  result=1;
  while(1)
  {
      if(multiply(result,result)>x)
      {
          result=subtract(result,1);
          break;
      }
      result=add(result,1);
  }
  /* Code goes here */
  return result;
}

int exponentiate(int x, int y)
{
  int result;
  /* Code goes here */
  result=1;
  for(int i=1;i<=y;i=add(i,1))
  {
      result=multiply(result,x);
  }
  /* Code goes here */
  return result;
}


int main()
{
  int x,y,op;

  printf("Operations:\n");
  printf("1. Add \n");
  printf("2. Subtract \n");
  printf("3. Multiply\n");
  printf("4. Divide\n");
  printf("5. Square Root\n");
  printf("6. Exponentiate\n");

  printf("Enter the operation (1,2,..):\n");
  scanf("%d",&op);

  switch (op)
  {
    case 5:   printf("Enter positive integer\n");
              scanf("%d",&x);
              break;
    default:  printf("Enter first positive integer\n");
              scanf("%d",&x);
              printf("Enter second positive integer\n");
              scanf("%d",&y);
  }
  switch (op)
  {
    case 1: printf("Result = %d\n",add(x,y)); break;
    case 2: printf("Result = %d\n",subtract(x,y)); break;
    case 3: printf("Result = %d\n",multiply(x,y)); break;
    case 4: printf("Result = %d\n",divide(x,y)); break;
    case 5: printf("Result = %d\n",squareroot(x)); break;
    case 6: printf("Result = %d\n",exponentiate(x,y)); break;
  }
  return 0;
}
