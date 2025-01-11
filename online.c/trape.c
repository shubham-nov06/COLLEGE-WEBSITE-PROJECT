#include<stdio.h>
int main(){

int a,b,h;

printf("enter a=");
scanf("%d" , &a );

printf("enter b=");
scanf("%d" , &b);

printf("enter h=");
scanf("%d" , &h);

printf( "area of trapezoid = %d ", (a+b)/2*(h));
return 0;
}