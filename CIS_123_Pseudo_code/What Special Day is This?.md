**Problem Description**:

Write a program that prompts the user for a month and day and prints out whether it is one of the following four holidays:

- New Year’s Day (January 1)
- Valentine's Day (February 14)
- Independence Day (July 4)
- Juneteenth (June 19)
- Christmas Day (December 25)

The program should also verify that the user enters a month in the range of 1 to 12 and a date in the range of 1 to 31. You should add at least two additional holidays and your birthday to the list of special days.

Here are a few sample runs:

|   |
|---|
|Enter a month (1-12): **7**<br><br>Enter a date (1-31): **4**<br><br>That is Independence Day.|

|                                                                                                                                      |
| ------------------------------------------------------------------------------------------------------------------------------------ |
| Enter a month (1-12): **2**<br><br>Enter a date (1-31): **24**<br><br>That may not be a holiday, but every day should be celebrated! |

|   |
|---|
|Enter a month (1-12): **16**<br><br>Enter a date (1-31): **3**<br><br>That is not a valid entry.|

Submission Details: 

- You should submit an algorithm as comments in a C++ program file (.cpp)
- You should include your name as a comment at the top of the file 
- Your code should compile cleanly (zero errors). 
    - If your code does not compile, points will be deducted from your final grade. 
- Your algorithm should be written in plain English

# Algorithm
**Variables**
month: int: month number from user input
day: int: day number from user input

**Procedure**
1. Declare the variables `month` and `day` 
2. Prompt the user to enter a month number (1-Jan, 12-Dec)
3. Prompt the user to enter a day
4. if the month is equal to 1 and date equal to 1, state "That is New Years day"
5. else if the month is equal to 2 and date equal to 14, state "That is Valentines Day"
6. else if the month is equal to 7 and day equal to 4, state "That is Independence Day"
7. else if month = 8 and day = 10, state "That is Anaya's birthday!"
8. else if month = 6 and day = 19, state "that is Juneteenth"
9. else if month = 11 and day = 1, state "that is All Saint's Day"
10. else if month = 11 and day == 11, state "that is veteran's day"
11. else if month = 12 and day = 25, state "that is Christmas"
12. else if `month` is not in range of 1 and 25 and or `day` is not in range of 1 and 31, state the date they entered is invalid
13. else, state that there is no holiday, but every day should be celebrated