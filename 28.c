#include<stdio.h>

void indian();
void bonjur();

 int main (){
  printf("Enter the name of country ");
    char c ;

  scanf("%c", &c );
{  if( c=='i' ){

   indian();
  } else if (c=='b'){
   bonjur();

  } 
  return 0 ; 
   } }
 void indian(){
   printf("Namaste\n");
 } 
  void bonjur(){
   printf("Bonujur");
   } 