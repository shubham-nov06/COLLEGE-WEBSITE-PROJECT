#include<stdio.h>
int main(){

int a , b , c;
printf("Enter a =");
scanf("%d" , &a);

printf("Enter b=");
scanf("%d" , &b);

printf("Enter c= ");
scanf("%d" , &c);

a>b ? a>c ? printf("a") : printf("b") : printf("c");

return 0;

}