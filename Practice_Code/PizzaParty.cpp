/*
You are organizing a pizza party for your computer science class. You need to calculate how much each person will pay and how many slices each person gets.

**Requirements:**

- Prompt the user to enter the number of people attending the party
- Prompt the user to enter the total cost of all pizzas (as a floating-point number)
- Prompt the user to enter the total number of pizza slices
- Calculate and display the cost per person (rounded to 2 decimal places)
- Calculate and display the number of slices per person (as an integer - use integer division)
- Calculate and display any leftover slices that cannot be evenly distributed
- Use proper formatting with `fixed`, `setprecision()`, and appropriate spacing
- Include appropriate prompts and labels for all output
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables to keep track of number of attendies, slices, cost
    //cost perperson, slices per person, and leftover slices
    int numAttendies, numSlices, slicesPerPerson, numLeftovers;
    double totalCost, costPerPerson;

    //save the number of attendies coming to user's party
    cout << "Enter the number of people attending the party: ";
    cin >> numAttendies;

    //save the total cost of the pizzas
    cout << "Enter the total cost of the pizzas: ";
    cin >> totalCost;

    //save the total number of pizza slices
    cout << "Enter the total number of pizza slices: ";
    cin >> numSlices;

    //calculate the total cost of pizza per person
    costPerPerson = totalCost / numAttendies;

    //calculate the number of slices per person and the number of leftover slices
    slicesPerPerson = numSlices / numAttendies;
    numLeftovers = numSlices % numAttendies;

    //display the total price and how many slices each person will get
    cout << "Cost per person: $" << fixed << setprecision(2) << costPerPerson << endl;
    cout << "Each person gets " << slicesPerPerson << " with " << numLeftovers << " left over." << endl;


    return 0;
}