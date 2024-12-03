#include "Car.h"
#include <iostream>

//default constructor
Car::Car()
{
    name = "";
    price = 0;
    condition = "";
    mileage = 0;
    year = 0;
}

//parameterized constructor 
Car::Car(const string n, const int p, const string c, const float m, const int y)
{
    name = n;
    price = p;
    condition = c;
    mileage = m;
    year = y;
}

//copy constructor
Car::Car(const Car& copy)
{

}

//destructor 
Car::~Car()
{

}

