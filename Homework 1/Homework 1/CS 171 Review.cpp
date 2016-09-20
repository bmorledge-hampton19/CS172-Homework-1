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

// Yet another function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex04();

// One last function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex05();


// A function that receives an interger and returns twice that interger.
int doubler(int halfOfReturn);

// A function that receivies two intergers and returns their sum.
int add(int num1, int num2);

// A function that uses pass by reference to add 1 to a value.
void increment(int& numberToBeIncremented);


// A function that receives an Array and its size and outputs its contents to the console.
void whatsInTheArray(int theArray[], int arraySize);

// A function that receives an Array and a value and checks for that value within the array.  Returns true or false.
bool isItInTheArray(int theArray[], int arraySize, int check);




// Main function.
int main() {

	// Seed the rng using the internal clock.
	srand(time(0));

	// Run functions to do all kinds of things!
	ex02();
	ex03();
	ex04();
	ex05();

	//End function.  Everything is ok!
	return 0;

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



// Yet another function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex04() {

	// Run a loop that terminates only when the user inputs a number between 1 and 10.

	int loopTerminator = 0;

	while (loopTerminator > 9 || loopTerminator < 2) {

		cout << "Input a number between 1 and 10, exclusive: ";
		cin >> loopTerminator;

	}

	cout << "Thanks!";

	// Extra space because it looks better.
	cout << endl;


	// Use the previous variable to print out the sum of the cubes from 1 to the loopTerminator. (All within a for loop)
	// Print the result to the console.

	int cubeSum = 0;

	for (int i = 1; i <= loopTerminator; i++) {
		cubeSum += pow(i, 3);
	}

	cout << "The sum of all cubes from 1 to " << loopTerminator << " is " << cubeSum << "." << endl;

	// Extra space because it looks better.
	cout << endl;


	// Prints out a number of asterisks equivalent to the loopTerminator in a do while loop.

	int asterisks = 0;

	do {

		cout << "*";
		asterisks++;

	} while (asterisks < loopTerminator);

	// Extra space because it looks better.
	cout << endl << endl;


	// Uses a for loop to print all even numbers from 0 and 40 to the console.

	for (int i = 0; i < 41; i += 2) {
		cout << i << " ";
	}


	// Calls the doubler function. Double check to make sure it worked correctly.

	int twiceLoopTerminator = doubler(loopTerminator);

	if (loopTerminator * 2 != twiceLoopTerminator) {
		cout << "Something went wrong..." << endl;
	}


	// Call the add function with two random numbers. Double check to make sure it worked correctly.

	int rand1 = rand() % 100;
	int rand2 = rand() % 100;

	int randSum = add(rand1, rand2);

	if (randSum != rand1 + rand2) {
		cout << "something went wrong..." << endl;
	}


	// Call the increment function with an interger variable copied from the loop terminator. Double check to make sure it worked correctly.

	int movingUp = loopTerminator;

	increment(movingUp);

	if (movingUp != loopTerminator + 1) {
		cout << "something went wrong..." << endl;
	}

}


// One last function that receives no inputs and generates no outputs, and performs a variety of tasks.
void ex05() {

	// Reads in five intergers from the user and stores them in an array.

	const int ARRAY_VALUES_SIZE = 5;
	int arrayValues[ARRAY_VALUES_SIZE];

	for (int i = 0; i < 5; i++) {

		cout << "Gimme an interger! ";
		cin >> arrayValues[i];

	}

	// Extra space because it looks better.
	cout << endl;


	// Calculates and outputs the sum and product of the values in the array of values given by the user.

	int arraySum = arrayValues[0];
	int arrayProduct = arrayValues[0];

	for (int i = 1; i < 5; i++) {

		arraySum += arrayValues[i];
		arrayProduct *= arrayValues[i];

	}

	cout << "The sum of the values is: " << arraySum << endl;
	cout << "The product of the values is: " << arrayProduct << endl;

	// Extra space because it looks better.
	cout << endl;

	
	// Calls the whatsInTheArray function to print all of arrayValues values to the screen.

	whatsInTheArray(arrayValues, ARRAY_VALUES_SIZE);

	// Extra space because it looks better.
	cout << endl;


	// Calls the isItInTheArray function with an interger from the user to determine whether or not it is in the array arrayValues.

	int valueToCheck = 0;
	cout << "What value do you want to check for? ";
	cin >> valueToCheck;

	if (isItInTheArray(arrayValues, ARRAY_VALUES_SIZE, valueToCheck)) {
		cout << "It's in the array!";
	}
	else {
		cout << "It's not in the array...";
	}


}



// A function that receives an interger and returns twice that interger.
int doubler(int halfOfReturn) {
	return halfOfReturn * 2;
}

// A function that receives two intergers and returns their sum.
int add(int num1, int num2) {
	return num1 + num2;
}

// A function that uses pass by reference to add 1 to a value.
void increment(int& numberToBeIncremented) {
	numberToBeIncremented++;
}


// A function that receives an Array and its size and outputs its contents to the console.
void whatsInTheArray(int theArray[], int arraySize) {

	for (int i = 0; i < arraySize; i++) {
		cout << theArray[i] << endl;
	}

}

// A function that receives an Array and a value and checks for that value within the array.  Returns true or false.
bool isItInTheArray(int theArray[], int arraySize, int check) {

	for (int i = 0; i < arraySize; i++) {
		if (theArray[i] = check) return true;
	}

	return false;

}