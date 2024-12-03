#include <string>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
using namespace std;


class Car
{
    public:
        //constructors
        Car();
        Car(const string name, const int price, const string condition, const float mileage, const int year);
        Car(const Car& copy);

        //destructor
        ~Car();


        //getters
        string getName() const;
        int getPrice() const;
        string getCondition() const;
        float getMileage() const;
        int getYear() const; 

        //setters
        void setName(const string name);
        void setPrice(const int price);
        void setCondition(const string condition);
        void setMileage(const float mileage);
        void setYear(const int year);

        //print method
        void printCarInfo();


    //Private Attributes
    private:
        string name;
        int price;
        string condition; 
        float mileage;
        int year; 
        int numCars;    

};