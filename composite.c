#include<stdio.h>
int main() {
 int start = 1;
 int end;
 int count = 0;
 int i = 1;
 printf("Enter end number: \n");
 scanf("%d",&end);

 printf("Composite Numbers between %d and %d:\n", start, end);
 for(start=start; start<=end; start++)
 {
  for(i=1; i<=start; i++) 
  {
   if(start % i == 0)
    count++;
  }
  if(count > 2)
   printf("%d ", start);
  count = 0;
 }
 return 0;
}