#include<stdio.h>
// recursion function 
void printHW(int count ){

if(count == 0 ){
return ;}
printf("Hello world \n");

printHW(count-1);
} // end 
int main(){
    
printHW(4);
return 0 ; 
}