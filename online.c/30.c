#include <stdio.h>
// declaration function
int sum(int a, int b);
void table(int n);

int main()
{

    int n;
    printf("Enter the number :");
    scanf("%d", &n);

    table(n); // argument , actual parameter ,function call
    return 0;
}
// funtion defination
void table(int n)
{ // parameter , formal parameter
    for (int i = 1; i < 11; i++)
    {
        int t = i * n;
        printf("%d X %d =  %d \n", n, i, t);
    }
}