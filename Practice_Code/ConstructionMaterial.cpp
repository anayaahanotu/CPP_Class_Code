/*
A construction company needs a program to calculate materials and costs for
building rectangular concrete slabs with different specifications.

**Requirements:**

- Prompt the user to enter the length and width of the slab
(in feet, as floating-point numbers)
- Prompt the user to enter the thickness of the slab 
(in inches, as floating-point number)
- Ask the user to choose the concrete type by entering a character:
    - 'S' or 's' for Standard concrete ($95 per cubic yard)
    - 'H' or 'h' for High-strength concrete ($125 per cubic yard)
    - 'D' or 'd' for Decorative concrete ($150 per cubic yard)
- Calculate the volume of concrete needed in cubic feet, then convert to cubic
yards (27 cubic feet = 1 cubic yard)
- Calculate the total material cost based on the concrete type chosen
- Apply a 6.5% sales tax to the material cost
- Add a flat labor fee of $200
- Generate a random delivery fee between $50 and $150
- Calculate the total project cost (materials + tax + labor + delivery)
- Display a detailed invoice showing:
    - Slab dimensions (length × width × thickness)
    - Concrete volume in both cubic feet and cubic yards (2 decimal places)
    - Concrete type selected
    - Material cost before tax
    - Tax amount
    - Labor fee
    - Delivery fee
    - Total project cost
- Use proper formatting with currency symbols, aligned columns, and consistent
decimal places

- Handle invalid concrete type selections with appropriate error messages
- Use type casting where necessary for calculations
*/

#include <iostream>
#include <random>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    //keep track of the length (ft) and width (ft) of the slab
    //keep track of the thickness of the slab (in)
    //keep track of concrete type, volume (cu. ft) of slab, subtotal, total
    //save the sales tax ad the labor fee, and the delivery fee

    double length, width, thickness, volume;
    char concreteType;
    double subtotal = 0;
    double total = 0;
    const double SALES_TAX = 0.065;
    const double LABOR_FEE = 200;
    srand(time(0));
    const double DELIVERY_FEE = (rand() % 100) + 50;

    //get the length of the slab from user input
    cout << "Enter the length in inches of the slab: ";
    cin >> length;

    //get the width of the slab from user input
    cout << "Enter the width in inches of the slab: ";
    cin >> width;
    
    //get the depth of the slab from user input
    cout << "Enter the depth in inches of the slab: ";
    cin >> thickness;
    
    //get the slab type from user input via a menu for the user
    //either s (standard concrete), h (high-strength concrete)
    //or d (decorative concrete)
    cout << "Enter the letter that corresponds with the slab type you want:"
        << "\ns: standard\nh: high-strength\nd: decorative\n> ";

    cin >> concreteType;

    //calculate the volume in cubic ft of concrete needed
    //(convert thickness to ft)
    volume = length * width * (thickness / 12);

    //calculate total material cost based on concrete choice
    //if user chose 's', apply standard price
    if (concreteType == 's' || concreteType == 'S') {
        //$95/yd is the standard price
        subtotal += 95;
    }
    //else if user chose 'h', apply high-strength price
    else if (concreteType == 'h' || concreteType == 'H') {
        //$125/yd is the high-strength price
        subtotal += 125;
    }

    //else if user chose 'd', apply decorative price
    else if (concreteType == 'd' || concreteType == 'D') {
        //$150 is the decorative price

        subtotal += 150;
    }
    //else, tell the user that their input is invalid. End the code early
    else {
        cout << "Your choice is invalid" << endl;
        exit(EXIT_FAILURE);
    }

    //apply the volume to the price (multiply subtotal by volume)
    subtotal *= volume;

    //apply sales tax to total price
    total = subtotal * (1 + SALES_TAX);

    //apply delivery fee
    total += DELIVERY_FEE;
    
    //apply labor fee
    total += LABOR_FEE;

    //display detailed invoice including slab details, subtotal, tax and fees,
    //and total
    cout << "\nInvoice:\n" 
        << "Slab dimensions (ft): " << length << " x " << width << " x " 
        << thickness
        << " (" << volume << " cubic ft.)\n"
        << "Concrete selected: " << concreteType << "\n"
        << "Subtotal: $" << fixed << setprecision(2) << subtotal
        << "\nSales tax: " << fixed << setprecision(3) << SALES_TAX
        << "\nLabor fee: $" << fixed << setprecision(2) << LABOR_FEE
        << "\nDelivery fee: $" << DELIVERY_FEE
        << "\nfinal cost: $" << total << endl;

    return 0;


}