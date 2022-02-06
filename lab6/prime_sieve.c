#include <stdio.h>

void printArray(int a[],int size);
void initialize(int a[],int size);
int removeLabels(int a[],int size);
void labelMultiples(int a[], int size, int location, int offset);
int findNextLocation(int a[], int size, int location);

int main()
{
  int A[1000];
  int size;

  printf("Enter maximum value (>1 and <1000):\n");
  scanf("%d",&size);
  initialize(A,size);

  /* Code goes here */
  int i;
  for(i=2;i<=size;i++)
  {
    labelMultiples(A,size,i-1,i);
  }
   /* Code goes here */

  printf("Primes uptil %d:\n",size);
  size=removeLabels(A,size);
  printArray(A,size);
  return 0;
}

// Intialize array a[] with 1,2,3,...,size
void initialize(int a[],int size)
{
  for (int i = 0; i < size; i++)
  {
      a[i]=i+1;
  }
}

// Print array a[] with 1,2,3,...,size
void printArray(int a[],int size)
{
  printf("\n");
  for (int i = 0; i < size; i++)
  {
      printf("%d ",a[i]);
  }
  printf("\n");
}

// Removes -1 from the array a[] and returns the new size of the array.
int removeLabels(int a[],int size)
{
  int end;
  end=0;

  for (int i = 0; i < size; i++)
  {
    if(a[i]!=-1)
    {
      a[end]=a[i];
      end++;
    }
  }
  return end;
}

// Labels positions in the array with value -1,
// starting at 'location' with gap 'offset'.
void labelMultiples(int a[], int size, int location, int offset)
{
  for (int i = location + offset; i < size; i=i+offset)
  {
      a[i]=-1;
  }
}

// Find next immediate position after 'location' that does not have value -1.
int findNextLocation(int a[], int size, int location)
{
  int pos;
  for (int i = location + 1; i < size; i++)
  {
      if(a[i]!=-1)
      {
        pos=i;
        break;
      }
  }
  return pos;
}
