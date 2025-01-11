#include <stdio.h>
int main()
{
    int arr[4];
    printf("Enter number physics :");
    scanf("%d", &arr[0]);

    printf("Enter number in maths: ");
    scanf("%d ", &arr[1]);

    printf("Enter number ai:");
    scanf("%d", &arr[2]);

    printf("Enter number in hvpe: ");
    scanf("%d ", &arr[3]);
    int sum = arr[0] + arr[1] + arr[2] + arr[3];

    printf("Total Marks = %d", sum);
}