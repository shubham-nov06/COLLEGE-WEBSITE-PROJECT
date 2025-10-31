// use of while loop
#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a, b;
    cout << "ENter first number ";
    cin >> a;
    cout << "ENter second number";
    cin >> b;
    cout << "The function return=" << add(a, b);
    return 0;
}
