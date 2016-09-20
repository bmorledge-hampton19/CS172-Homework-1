/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 9-13-2016
// Homework 1
/////////////////////

// Pre-processor directives.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


// Prototype functions.

// A function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex02();

// Another function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex03();


// Main function.
int main() {

	// Seed the rng using the internal clock.
	srand(time(0));

	// Run functions to do all kinds of things!
	ex02();
	ex03();

}

// A function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex02() {

	// Intializes a boolean "hasPassedTest" as true.
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

	// Extra space because it looks better.
	cout << endl;


	// Prompts the user to input a number of shares and determines whether or not that value is less than 100.
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

	// Extra space because it looks better.
	cout << endl;


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

	// Extra space because it looks better.
	cout << endl;


	// Receives a shelf life and outside temperature from the user and decreases the shelf life if the temperature is high enough.

	int shelfLife;
	int outsideTemp;

	cout << "What is the shelf life for your chocolate?";
	cin >> shelfLife;

	cout << "What is the outside Temperature?";
	cin >> outsideTemp;

	if (outsideTemp > 90) shelfLife -= 4;

	// Extra space because it looks better.
	cout << endl;

}

// Another function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex03() {

	// Receives a side length for a square from the user and computes the length of the square's diagonol.
	// Outputs the result to the console.

	double squareSideLength;
	double squareDiagonalLength;
	cout << "What is the side length of your square?";
	cin >> squareSideLength;

	squareDiagonalLength = squareSideLength*sqrt(squareSideLength);

	cout << "The length of the square's diagonal is: " << squareDiagonalLength << "." << endl;

	// Extra space because it looks better.
	cout << endl;


	// Prompts the user to enter a 'y' or 'n' char.  
	// Outputs "yes" if they entered 'y' and outputs "no" if they entered 'n'.

	char yesOrNo;
	cout << "Type 'y' for yes and 'n' for no. ";
	cin >> yesOrNo;

	if (yesOrNo == 'y') cout << "Yes" << endl;
	else if (yesOrNo == 'n') cout << "No" << endl;

	// Extra space because it looks better.
	cout << endl;


	// Initialize a character as the tab character.
	char tab = 9;

	cout << tab << "Did it work?";

	// Extra space because it looks better.
	cout << endl;


	// Declare a string and prompt the user to enter their mailing address into the string.
	
	string mailingAddress;
	cout << "Please enter your mailing address: ";
	getline(cin, mailingAddress, '\n');


	// initialize a string to be empty.
	string emptyString = "";


}
