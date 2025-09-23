Author: Anaya Ahanotu
Date: 23 September 2024
# Algorithm

**Variables**
* totalChange: int: the total amount of change 
* pennies: int: number of pennies of change
* dimes: int: number of dimes of change
* quarters: int: number of quarters of change
* nickels: int: number of nickels of change
* dollars: number of dollars of change

**Procedure**
1. Declare variables: totalChange, pennies, dimes, quarters, nickels, dollars
2. Prompt the user to enter the total amount of change --> assign to totalChange
3. perform integer division on totalChange / 100 --> assign to dollars
4. subtract 4 \* numDollars from the value of totalChange
5. perform integer division on totalChange / 25 --> assign to quarters
6. subtract 25 \* quarters from the value of totalChange
7. perform integer division on totalChange / 10 --> assign to dimes
8. subtract 10 \* numDimes from totalChange
9. perform integer division on totalChange / 5 --> assign to nickels
10. subtract 5 \* numNickels from totalChange
11. assign the remainder of totalChange to numPennies
12. print out how many pennies, nickels, dimes, quarters, and dollars the user has in change.