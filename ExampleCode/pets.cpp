#include <iostream>
using namespace std;

int main() {
   int dogYears;
   float humanYears;

   cout << "How old is the dog? > ";

   cin >> dogYears;
    
   humanYears = 7 * dogYears;

   cout << dogYears;
   cout << " dog years is about ";
   cout << humanYears;
   cout << " human years.";
   cout << endl;
   
   return 0;
}