#include <stdio.h>

void printstraight();
void printback();

int main()
{

    printstraight();
    printback();
    return 0;
}
void printstraight()
{
    printf("in straight order :");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}
void printback()
{
    printf("In revrerse order : ");
    for (int j = 10; j >= 1; j--)
    {
        printf("%d\n", j);
    }
}
