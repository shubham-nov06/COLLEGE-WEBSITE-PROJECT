#include<stdio.h>
int main () {

int a; 

printf("Enter a number = ");
scanf("%d" , &a );
 

for( int i = 1 ; i <=10  ; i++) {

int sum = i * a  ;
printf(" %d X %d = %d  \n" , a , i , sum ) ;


}

return 0 ; 












}