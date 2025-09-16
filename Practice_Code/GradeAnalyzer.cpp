/*
A teacher wants to analyze a student's performance across three exams and determine their letter grade and class standing.

**Requirements:**

- Prompt the user to enter the student's name (may contain spaces)
- Prompt the user to enter three exam scores (floating-point numbers between 0-100)
- Calculate the average of the three exam scores
- Determine the letter grade using this scale:
    - A: 90-100
    - B: 80-89
    - C: 70-79
    - D: 60-69
    - F: Below 60
- Generate a random class rank between 1 and 50 (use appropriate seeding)
- Display a formatted report that includes:
    - Student name
    - All three individual exam scores (1 decimal place)
    - Average score (2 decimal places)
    - Letter grade
    - Class rank with proper formatting
- Use `setw()` to create aligned columns in your output
- Include appropriate headers and spacing for a professional-looking report
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    //keep track of the test scores
    //save student's name
    //keep track of the letter grade
    // keep track of the average
    //keep track of the class rank (random)
    double score1, score2, score3;
    string name;
    char grade;
    double average;
    
    srand(time(0));
    const int RANK = (rand() % 50) + 1;

    //have user enter the student's name
    cout << "Enter the student's name: ";
    cin >> name;
    
    //prompt the user to enter the three test scores
    cout << "Enter the 3 test scores as pecentages (no percent sign) "
        << "separated by space\n> ";

    cin >> score1 >> score2 >> score3;

    // calculate the average
    average = (score1 + score2 + score3) / 3;

    //figure out the letter grade based on the numeric grade
    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 80) {
        grade = 'B';
    }
    else if (average >= 70) {
        grade = 'C';
    }
    else if (average >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }


    //display the student report
    cout << "\nStudent report:\n"
        << "Student name: " << name
        << fixed << setprecision(1)
        << "\nExam Scores: " << score1 << ", " << score2 << ", " << score3 
        << fixed << setprecision(2)
        << "\nAverage score: " << average << " (" << grade << ")"
        << fixed << setprecision(0)
        << "\nClass rank: " << RANK << endl;

    return 0;
        
}