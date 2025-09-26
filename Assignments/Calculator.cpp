/*
Anaya Ahanotu
CIS 123
Assignment: Simulate a Calculator
Objective: Allow the user to perform mathematical (addition, subtraction, 
multiplicatoin, and division) operations on two values

**Variables**
* num1: double: the value of num1
* num2: double: the value of num2
* symbol: char: the arithmetic operator that is used on num1 and num2

 **procedure**
 1. declare double num1, num2
 2. declare char symbol
 3. welcome the user and introduce them to the program
 4. Prompt the user for the first number --> save to num1
 5. Prompt the user for the second number --> save to num2
 6. Prompt the user for the mathematical operation to be performed on the
 values --> save to symbol
 7. check the value of symbol:
	 1. if the operand is '+': add num1 and num2 
		 1. print the sum of num1 and num2
	 2. else if the operand is '-': subtract num2 from num1
		 1. print the difference between num1 and num2
	 3. else if the operand is '\*': multiply num1 by num2 
		 1. print the product of num1 and num2
	 4. else if the operand is '/': divide num1 by num2
		 1. if num2 is 0: give division by zero error
		 2. else: divide num1 by num2.
			 1. print the quotient of num1 and num2
	5. else, the operand the user inputted is not valid: give the user an 
    error message

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //declare variables to store operands
    double num1, num2;
    //declare operand variable
    char symbol;

    //welcome the user and introduce them to the program
    cout << "This is a calculator. Enter two numbers to be operands and pick"
        << " an arithmatic operator:\n(+: addition, -: subtraction"
        << ", *: multiplication, and /:division)\n" << endl;

    //prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;
    //prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;
    //prompt the user to enter the oprand
    cout << "Select an operand listed in the introduction: ";
    cin >> symbol;

    //make a calculation based on the operand
    switch (symbol){
        //if the user chose +, add the values
        case '+': {
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        }
        
        //if the user chose -, subtract the values
        case '-': {
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        }

        //if the user chose *, multiply the values      
        case '*': {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        }

        //if the user chose /, divide the values 
        case '/': {
            //divide num1 and num2 if num2 is not 0
            if (!(fabs(0 - num2) < 1e-17)) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else {
                cout << "You cannot divide a value by zero." << endl;
            }

            break;
            
        }
        default: {
            cout << symbol << " is not a real operator." << endl; 
        }

    }

    return 0;

}