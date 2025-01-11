#include<stdio.h>
#include<math.h>
int main() {
int marks ;

printf( "Enter number (0-100) = ");
scanf("%d" , &marks);

if(marks>=0 && marks <30)
{ printf("Fail");
}
else if( marks >=30 && marks<=100)
{
    printf("Pass");
    }

return 0;
}