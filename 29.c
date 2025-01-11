#include<stdio.h>
int sum(int a ,  int b );

int main(){
    int a , b ; 
printf("Enter number 1 ");
scanf("%d", &a );

printf("Enter number 2 ");
scanf("%d" , &b );

int s = sum(a,b);
printf("sum is %d" , s);

} int sum(int x , int y ){
 
 return x + y ;

}