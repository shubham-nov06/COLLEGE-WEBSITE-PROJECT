#include<stdio.h>
int main() {
int a , b ;
printf("Enter a = ");
scanf("%d" , & a );
printf("Enter b ");
scanf("%d" , &b);

a &b ;
a | b ;
a ^ b ;

printf("And is %d" , a&b);
printf("OR is %d" , a|b) ;
printf("XOR is %d" , a^b );
return 0 ; 


}