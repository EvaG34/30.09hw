#include <iostream>
#include "CityUA.h"

using namespace std;

int main()
{
    CityUA city1;
    city1.Init("Odesa", 1010000);

    CityUA city2("Kyiv", 720000);

    city1.Print();
    cout << endl;

    city2.Print();
    cout << endl;

    city1.setName("Kyiv");
    city1.setPopulation(2950000);

    cout << "After changing:" << endl;
    cout << city1.getName() << endl;
    cout << city1.getPopulation() << endl;

    cout << endl;

    CityUA::PrintData();

    return 0;
}
