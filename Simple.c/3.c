#include<stdio.h>
int main(){

char alp ;
printf("Enter any character = ");
scanf("%c" , &alp) ;

if ( (alp >= 'a'  && alp <= 'z' )  || (alp>= 'A' && alp <= 'Z') ) 

 {
      printf("Is a alphabet ");
}

else {
    printf("Not ");
    
}

return 0 ; 
}

















