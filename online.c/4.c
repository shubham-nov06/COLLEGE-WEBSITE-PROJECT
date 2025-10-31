#include <stdio.h>

int getFirstDigit(int num)
{
 while (num >= 10)
 {
 num /= 10;
 }
 return num;
}

int getLastDigit(int num)
{
 return num % 10;
}

int main()
{
 int num, firstDigit, lastDigit, sum;

 printf("Enter a number: ");
 scanf("%d", &num);

 firstDigit = getFirstDigit(num);
 lastDigit = getLastDigit(num);

 sum = firstDigit + lastDigit;
 printf("The sum of the first and last digits of %d is: %d\n", num, sum);

 return 0;
}
