#include <iostream>
#include <string>
using namespace std;
class car
{
public:
    string brand = "BMW";
    int year = 2016;
    int model = 16;

    car()
    {
        cout << "This is a constructor " << endl;
    }
};
int main()
{
    car c1;

    cout << "Car brand is =" << c1.brand << endl;
    cout << "Car brand is = " << c1.year << endl;

    cout << "Car brand is = " << c1.model << endl;
}