#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include "Car.h"

class Dealership
{
	public:
		Dealership();
		Dealership(const Dealership & copy);
		~Dealership();
		
		void addCar(const string nameIn, const int priceIn, const string conditionIn, const float mileageIn, const int yearIn);
		void addCar(const Car carToAdd);
		
		void filterByCondition(const string conditionIn) const;
		void filterByYear(const int minYear, const int maxYear) const;
		void filterByMileage(const int maxMileage) const;
		
		Car findLeastExpensiveCar() const;
		
		void print() const;
		
	private:
		static const int MAX_NUMBER_CARS = 103;
		Car cars[MAX_NUMBER_CARS];
		int currentNumCars;
};

#endif