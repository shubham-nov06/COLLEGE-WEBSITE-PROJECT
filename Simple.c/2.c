#include <stdio.h>
#include <math.h>

int main()
{

    int a;

    printf("Enter a number = ");
    scanf("%d", &a);

    float sqar = sqrt(a);
    printf("%f \n ", sqar);

    if (sqar * sqar == a)
    {

        printf("is a perfect square ");
    }
    else {
        printf("Not a perfect square ");

    }

    return 0 ;

}