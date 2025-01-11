#include <stdio.h>
void printname(int count)
{
    if (count == 0)
    {
        return;
    }
    char a;
    printf("My name");
    scanf("%s", &a);
    printf("%s", a);
    printname(count - 1);
}
int main()
{

    printname(5);
    return 0;
}