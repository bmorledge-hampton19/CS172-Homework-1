/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 9-13-2016
// Homework 1
/////////////////////

// Pre-processor directives.
#include <iostream>
#include <cstdlib>
using namespace std;

// A function that receives no inputs and generates no outputs, but still performs a variety of tasks.
void ex02();

int main() {

	ex02();

}

void ex02() {

	// intializes a boolean as true
	bool hasPassedTest = true;


	// Creates two random integers and determines whether or not the first is greater than or equal to the second.
	// Prints the result to the console.
	int x = rand() % 100;
	int y = rand() % 100;
	
	if (x > y || x == y) {
		cout << "x is greater than or equal to y." << endl;
	}

	else {
		cout << "x is less than y." << endl;
	}


	// Prompts the user to input a value for a variable, and determines whether or not that value is less than 100.
	// Prints the result to the console.
	int numberOfShares;
	cout << "How many shares? ";
	cin >> numberOfShares;

	if (numberOfShares < 100) {
		cout << "Oh no!  You have less than 100 shares!!!" << endl;
	}
	else {
		cout << "Hooray!  You have at least 100 shares!!!" << endl;
	}


	// receives a box and book width from the user and determines whether the box width is divisible by the book width.
	// Prints the result to the console.
	int boxWidth;
	int bookWidth;

	cout << "What is the box width?";
	cin >> boxWidth;

	cout << "What is the book width?";
	cin >> bookWidth;

	if (boxWidth%bookWidth == 0) {
		cout << "Your books will fit snugly in your box.  So efficient!" << endl;
	}
	else {
		cout << "Your books will leave some empty space in the box.  Not very efficient..." << endl;
	}


	// Receives a shelf life and outside temperature from the user and decreases the shelf life if the temperature is high enough.
	int shelfLife;
	int outsideTemp;

	cout << "What is the shelf life for your chocolate?";
	cin >> shelfLife;

	cout << "What is the outside Temperature?";
	cin >> outsideTemp;

	if (outsideTemp > 90) shelfLife -= 4;

}