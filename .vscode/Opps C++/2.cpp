#include <iostream>
using namespace std;
class Distance
{
private:
    int meters;

public:
    Distance()
    {
        meters = 0;
    }
    void displaydata()
    {
        cout << "Meters  Value : " << meters << endl;
    }
    void addValue(Distance &d)
    {
        d.meters = d.meters + 5;
    }};

int main()
{
    Distance d1;
    d1.displaydata();
    d1.addValue(d1);
    d1.displaydata();

    return 0;
}