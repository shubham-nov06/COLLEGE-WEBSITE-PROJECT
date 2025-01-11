#include <stdio.h>
#include <math.h>
void power();
int main()
{
    power();
}
void power()
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);

    printf("%f", pow(num, 2)); // always use %f while doing pow or double function
}