#include <stdio.h>
int main()
{
    char input, alphabet = 'A';
    printf("Enter a uppercse alphabet ");
    scanf("%c", &input);

    for (int i = 1; i <= (input - 'A' + 1); i++)
    {
        for (int j = 1; j <= input; j++)
        {
            printf("%c", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
}