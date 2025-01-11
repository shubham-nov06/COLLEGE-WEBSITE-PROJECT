#include <stdio.h>

void printTable(int num, int i)
{
    if (i > 10)
    {
        return;
    }
    printf("%d * %d = %d\n", num, i, num * i);
    printTable(num, i + 1);
}

int main()
{
    int num = 5;
    printTable(num, 1);
    return 0;
}