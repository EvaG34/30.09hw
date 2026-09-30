#include "CityUA.h"

string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Volodymyr Zelenskiy";
int CityUA::population_country = 45000000;
int CityUA::Count = 0;

CityUA::CityUA()
{
    name = "";
    population_city = 0;
    Count++;
}

CityUA::CityUA(string n, int pop)
{
    name = n;
    population_city = pop;
    Count++;
}

void CityUA::Init(string n, int a)
{
    name = n;
    population_city = a;
}

void CityUA::setName(string n)
{
    name = n;
}

void CityUA::setPopulation(int pop)
{
    population_city = pop;
}

string CityUA::getName() const
{
    return name;
}

int CityUA::getPopulation() const
{
    return population_city;
}
string CityUA::getName() const
{
    return name;
}

int CityUA::getPopulation() const
{
    return population_city;
}
void CityUA::Print() const
{
    cout << "City: " << name << endl;
    cout << "Population: " << population_city << endl;
}
void CityUA::PrintData()
{
    cout << "Language: " << language << endl;
    cout << "Capital: " << capital << endl;
    cout << "President: " << president << endl;
    cout << "Population of country: " << population_country << endl;
    cout << "Count of cities: " << Count << endl;
}
