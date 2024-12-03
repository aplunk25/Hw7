/******************************************************************************
Author: Alex Plunk
Date: 12/02/2024 
Purpose:    Homework 7 final code
*******************************************************************************/

#include <fstream>
#include "Dealership.h"

// GIVEN - mostly given to you - you will need to modify this code to add the car
// to the Dealership object instead of just printing the information to the screen
void read(string filename, Dealership & carDealership) {
	// Attempt to open specified file
	ifstream din(filename);

	// Check if file was opened successfully
	if (din.fail()) {
		cout << "Error opening file " << filename << endl;
		exit(1);
	}

	// Declare variables to read into
	string name, condition;
	int price, year;
	float mileage;

	// Read in header line from file, throw away
	getline(din, name);

	// Read in all movies from file
	while (!din.eof()) {
		din >> name >> price >> condition >> mileage >> year;

		// this is provided for error checking to make sure you are reading in the file of cars - 
		// after you know you are, you will comment this line out and just add the car to the 
		// Dealership object array using a method found in the Dealership class
		cout << name << " " << price << " " << condition << " " << mileage << " " << year << endl;

		// Add car to Dealership object array - you will be adding code here!!
		// you do NOT need to add code above this line

	}

	// Close input file
	din.close();
}

// GIVEN - Function to print menu to console
void printMenu() {
	cout << "\t1. Add a car" << endl;
	cout << "\t2. Filter available cars by condition" << endl;
	cout << "\t3. Filter available cars by maximum amount of mileage" << endl;
	cout << "\t4. Filter available cars by a range of years (inclusive)" << endl;
	cout << "\t5. Find the least expensive car available in the inventory" << endl;
	cout << "\t6. Print all cars" << endl;
	cout << "\t7. Exit" << endl;
}

// GIVEN - get the user's choice from the menu
int getUserChoice() {
	// Declare variable to store user choice, prompt for input, and store input
	int choice;
	cout << "Enter choice >> ";
	cin >> choice;
	cout << endl;

	// Check if input is valid
	if (choice < 1 || choice > 7) {
		cout << "Invalid choice. Try again." << endl;
		return getUserChoice();
	}

	// Return user choice
	return choice;
}

int main() {
	// Display welcome message
	cout << "Welcome to a brand name car dealesrhip! \n";
	
	// Create Dealership object using default constructor, call read function found above


	// Print menu and get user choice


	// while user's choice is not to quit

		// switch statement between the options







	// goodbye message


	return 0;
}