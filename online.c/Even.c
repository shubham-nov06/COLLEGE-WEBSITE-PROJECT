#include <stdio.h>
#include <math.h>

void shubham() {
   int a =1 , b = 3  ;
   printf(" %d " , a+b );

}
int main()
{
 shubham() ;
   int a;
   printf(" enter a number  ");
   scanf("%d", &a);

   if (a % 2 == 0)
   {
      printf(" ye to even hai");
   }
   else
   {
      printf(" ye to odd hai ");
   }
   return 0;
} 