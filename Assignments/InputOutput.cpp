/* 
Anaya Ahanotu
4 September 2025
Assignment: Practicing input and output
Description: The program takes in the user's name, birth year, and favorite
programming language. Displays the user's name, birth year, and favorite
programming language in a fun way
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declare variables to store the user's name, favorite language
    //and birthyear
    string firstName, lastName, faveLanguage;
    int birthYear, age;

    //ask user for fist name
    cout << "Enter your first name: ";
    cin >> firstName;

    //ask user for last name
    cout << "Enter your last name: ";
    cin >> lastName;

    //ask for the user's favorite language
    cout << "Enter your favorite language: ";
    cin >> faveLanguage;

    //ask for the user's birth year
    cout << "Enter the year you are born: ";
    cin >> birthYear;

    //calculate how old the user is
    age = 2025 - birthYear;

    //print the user's name
    cout << "\nHello, " << firstName << " " << lastName << "!\n";
    cout << "You are " << age << " years old.\n";
    cout << "You like a fun language called " << faveLanguage << "!" << endl;

}