#include <stdio.h>
#include <math.h>
void square()
{
    int a;
    printf("Enter value : ");
    scanf("%d", &a);
    printf("Area is = %f\n", pow(a, 2));
}
void circle()
{
    int a;
    printf("Enter radius : ");
    scanf("%d", &a);

    printf("Area is %f\n ", pow(a, 2) * (3.14));
}
void ractangle()
{
    int a, b;
    printf("Enter lenght : ");
    scanf("%d", &a);

    printf("Enter width : ");
    scanf("%d", &b);
    printf("Area is %d\n", a * b);
}
int main()
{
    square();
    circle();
    ractangle();
    return 0;
}