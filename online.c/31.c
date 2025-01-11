
#include<stdio.h>
void printname(char name[]) {
    for (int i = 0 ; i<=10 ; i++ ){
    printf("%s\n" , name );}
 } 
 int main (){
    char name [20]; 
    printf("Enter name ");
    scanf("%s" , &name);
 printname(name);
 return 0 ; 
 } 