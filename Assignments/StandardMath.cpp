/*
Anaya Ahanotu
CIS 123
Assignment: Standard Math Operations
Task: Perform different mathematical operations on 2 values

Algorithm:
1. ask the number for 2 numbers and store the numbers in 2 variables
2. Make sure all outputted values display 4 decimal places.
3. find the sum of the numbers and print the sum
4. find the difference of the numbers and print the difference
5. find the product of the numbers and print the product
6. find the average of the numbers and print the average
7. find the distance of the numbers and print the distance
8. find the maximum of the numbers and print the maximum
9. find the minimum of the numbers and print the minimum
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double num1;
    double num2;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    cout << fixed << setprecision(4) << "\nThe sum of the numbers is: "
        <<  num1 + num2 << endl;

    cout << "The difference between the 1st number and 2nd number is: " 
        << num1 - num2 << endl;

    cout << "The products of the numbers  is: " << num1 * num2 << endl;

    cout << "The average of the numbers is: " << (num1 + num2) / 2.0 << endl;

    cout << "The distance between the numbers is: " << fabs(num1 - num2)
        << endl;

    cout << "The highest value between the numbers is: " << fmax(num1, num2) << endl;

    cout << "The lowest value between the numbers is: " << fmin(num1, num2) << endl;

    return 0;
}