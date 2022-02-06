#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter a valid non-vowel: ");
    scanf("%[^AEIOUaeiou\n]",&ch);
    printf("the entered non-vowel is %c\n",ch);
    
    return 0;
}