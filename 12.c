#include<stdio.h>
int main() {

int a , b , c ;

printf("Enter a =");
scanf("%d" , &a);

printf("Enter b =");
scanf("%d" , &b);

printf("Enter c =");
scanf("%d" , &c);

a>b ? a>c?  printf("a is greater ") : printf("b is greater ") : b>c? printf("b is greater") : printf("c is grater") ;
return 0 ;
}