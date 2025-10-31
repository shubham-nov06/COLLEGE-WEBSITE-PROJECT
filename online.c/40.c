#include <stdio.h>

int main()
{
    char name[50];
    int times;

    // Get the user's name
    printf("Enter your name: ");
    scanf("%s", &name);

    // Get the number of times to print the name
    printf("Enter the number of times to print your name: ");
    scanf("%d", &times);

    // Print the name the specified number of times
    for (int i = 0; i < times; i++)
    {
        printf("%s\n", name);
    }
    return 0;
}
