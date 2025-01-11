#include <stdio.h>

void printHello();
int main()
{
    printHello();


return 0 ;
}

void printHello(){
    for(int i = 1; i<=10 ; i++){
        printf("%d \n" , i );
    }
}