/*
Anaya Ahanotu
CIS 123
Assignment: What Day is it?
Objective: Tell the user the holiday of the day they inputted

Procedure:
1. Declare the variables `month` and `day` 
2. Prompt the user to enter a month number (1-Jan, 12-Dec)
3. Prompt the user to enter a day
4. if the month is equal to 1 and date equal to 1, state "That is New Years day"
5. else if the month is equal to 2 and date equal to 14, state
"That is Valentines Day"
6. else if the month is equal to 7 and day equal to 4, state "That is
 Independence Day"
7. else if month = 8 and day = 10, state "That is Anaya's birthday!"
8. else if month = 6 and day = 19, state "that is Juneteenth"
9. else if month = 11 and day = 1, state "that is All Saint's Day"
10. else if month = 11 and day == 11, state "that is veteran's day"
11. else if month = 12 and day = 25, state "that is Christmas"
12. else if `month` is not in range of 1 and 25 and or `day` is not in range of
 1 and 31, state the date they entered is invalid
13. else, state that there is no holiday, but every day should be celebrated
*/

#include <iostream>
using namespace std;

int main() {
    //declare month and day variables
    int month, day;

    //ask user for the month 
    cout << "Enter a month  (1 (Jan) - 12 (Dec)): ";
    cin >> month;

    //ask user for the date
    cout << "Enter the date (1 - 31): ";
    cin >> day;

    //check the date. If the date is a holiday, tell the user the holiday

    //if the date is Jan 1, tell the user that is new years day
    if (month == 1 && day == 1) {
        cout << "This is New Years Day!" << endl;
    }
    //else if the date is Feb 14, tell the user that is Valentines Day
    else if(month == 2 && day == 14){
        cout << "This is Valentines Day" << endl;
    }
    //else if the date is July 4, tell the user that is Independance Day
    else if (month == 7 && day == 4) {
        cout << "That is Fourth of July!" << endl;
    }
    //else if the date is August 10th, tell the user it is Anaya's Birthday
    else if (month == 8 && day == 10) {
        cout << "That is Anaya's Birthday!" << endl;
    }
    //else if the date is June 19, tell the user that is Juneteenth
    else if (month == 6 && day == 19) {
        cout << "That is Juneteenth!" << endl;
    }
    //else if the date is November 1, tell the user that is All Saint's Day!
    else if (month == 11 & day == 1) {
        cout << "That is All Saint's Day!" << endl;
    }
    //else if the date is November 11, tell the user that is Veteran's Day
    else if (month == 11 && day == 11) {
        cout << "That is Veteran's Day" << endl;
    }
    //else if the date is December 25, tell the user that it is Christmas
    else if (month == 12 && day == 25) {
        cout << "That is Christmas!" << endl;
    }
    //else if the month is not in range of 1 and 12 or the date is not in range
    //of 1-31, the date does not exist; give the user an error message
    else if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Error: That date does not exist!" << endl;
    }
    //else, the date is valid but is not a holiday. Leave message about the day
    else {
        cout << "There is no holiday, but every day should be celebrated!"
        << endl;
    }

    return 0;
}