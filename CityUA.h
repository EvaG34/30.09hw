#pragma once
#include <iostream>
#include <string>

using namespace std;

class CityUA
{
    string name;
    int population_city;

    static string language;
    static string capital;
    static string president;
    static int population_country;
    static int Count;

public:
    CityUA();
    CityUA(string n, int pop);

    void Init(string n, int a);

    void setName(string n);
    void setPopulation(int pop);

    string getName() const;
    int getPopulation() const;

    void Print() const;

    static void PrintData();
};
