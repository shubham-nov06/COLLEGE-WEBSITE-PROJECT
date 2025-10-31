#include <stdio.h>
void display(int n)
{
    if (n == 0)
    {
        return (n);
    }
    printf("%d\n", n);
    n--;

    display(n);
    printf("hello world");
}
int mian()
{
    display(67);
}

