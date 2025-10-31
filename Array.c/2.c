#include <stdio.h>
int gst()
{

    float arr[3];
    printf("Enter 1st price ");
    scanf("%f", &arr[0]);
    printf("Enter 2nd price ");
    scanf("%f", &arr[1]);
    printf("Enter 3rd price ");
    scanf("%f", &arr[2]);

    printf("Final value is %f \n", arr[0] + (0.18 * arr[0]));
    printf("Final value is %f \n", arr[1] + (0.18 * arr[0]));
    printf("Final value is %f \n", arr[2] + (0.18 * arr[0]));
    return 0;
}
int main()
{

    gst();
}