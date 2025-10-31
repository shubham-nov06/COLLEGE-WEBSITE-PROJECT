#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int fact = 1;
    for (int i = 1; i <= 10; i++)
    {
        fact = fact * i;
        cout << " fact is " << fact;
    }

    return 0;
}