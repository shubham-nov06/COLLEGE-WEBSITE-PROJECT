#include<stdio.h>
int main(){

int a , b ,c ;
printf("Enter a = ");
scanf("%d" , &a);
printf("Enter b = ");
scanf("%d" , &b ) ;
printf("Enter c = ");
scanf("%d" , &c);

(a==b && b==c && c==a  )? printf("This triangle is equitorial ") : (a==b || b==c || c==a ) ? printf("This triangle is isosceles ") : printf("This triangle is scalene ");
return 0 ;










}