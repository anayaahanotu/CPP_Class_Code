#include <iostream>
using namespace std;

int main()
{
    int numPizzas; 

    cout << "How many pizzas did you order: ";

    cin >> numPizzas;

    int cost = numPizzas * 12;

    cout << "Your pizza cost: $" << cost << endl;

    return 0;
}