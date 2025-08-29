#include <iostream>
using namespace std;

int main()
{
    double farenheit;
    double celcius;

    cout << "Enter the temperature in celcius: ";
    
    cin >> celcius;

    farenheit = (celcius * 9/5) + 32;

    cout << "The temperature in farenheit: " << farenheit << endl;

}