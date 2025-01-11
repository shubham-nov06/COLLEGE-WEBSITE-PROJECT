#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("Enter number = ");
    scanf("%d" , &a);

    if(a>=90 && a<=100)
    { printf("Grade a ");
    }
    else { if(a>=80 && a<90)
    printf("Grade b ");
    }

  if(a>=70 && a<80){
        printf("Grade c");
    }
    else {
        if(a>=60 && a<70)
        printf("Grade d ");
    }

        if(a<60 && a>=0){
        printf("Fail");
    }

    return 0;
}