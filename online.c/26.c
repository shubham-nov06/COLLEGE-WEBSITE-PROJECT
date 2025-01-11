#include<stdio.h>
void hellosum();
int main (){
  
  hellosum();
  

  

}
void hellosum(){
    int num ;
    printf("Enter number ");
  scanf("%d" , &num);

for( int i = 0 ; i<=num ; i++) {
 if(i==2 || i==4 || i== 2+1) {
    continue;
 } printf("%d\n" , i );
 if( i==i-num ) {
    break;
 }
 }
 

}