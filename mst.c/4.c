#include <stdio.h>
int main()
{
   int a, b;
   printf("Enter the first value : ");
   scanf("%d", &a);
   printf("Enter the second value : ");
   scanf("%d", &b);

   if (a || b)
   {
      printf("Result of %d AND %d is: 1 (True)\n", a, b);
   }
   else
   {
      printf("Result of %d AND %d is: 0 (False)\n", a, b);
   }
   return 0;
}