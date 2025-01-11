#include<stdio.h>
int main()
{

int a;
printf("Enter marks = ");
scanf("%d" , &a);

if ( a>100 || a<0 ) {
    printf("Invalid number ");
} else {
      if(a>=90 && a<=100){
      printf("grade a "); }
else{
    if(a>=80 && a<90 ){
        printf("Grade b ");
    }
 else{
    if(a>=70 && a<80 )
     printf("Grade c"); 
else {
    if(a>=60 && a<70) {
        printf("Grade e ");
    }
else{
    printf("Fail ");
}  }
 }
} 
}

 return 0 ;

}