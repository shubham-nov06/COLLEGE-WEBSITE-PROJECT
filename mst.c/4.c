#include<stdio.h>
int main(){
int a ;
printf("ENter age = ");
scanf("%d", &a);

if(a>=1){
    printf("Positive  ");}
else if (a<1){
    printf("Negative ");
}

else{
    printf("Special ");
}
}