**Description**
Write a program that simulates a calculator. You should ask the user what operation they want to perform (addition, subtraction, multiplication, division) and then calculate a solution. For this program, you are **REQUIRED** to use a switch statement. Print an informative output statement. 

You should not allow division operations with zero.
# Algorithm
**Variables**
* num1: double: the value of num1
* num2: double: the value of num2
* symbol: char: the arithmetic operator that is used on num1 and num2

 **procedure**
 1. declare double num1, num2
 2. declare char symbol
 3. welcome the user and introduce them to the program
 4. Prompt the user for the first number --> save to num1
 5. Prompt the user for the second number --> save to num2
 6. Prompt the user for the mathematical operation to be performed on the values --> save to symbol
 7. check the value of symbol:
	 1. if the operand is '+': add num1 and num2 
		 1. print the sum of num1 and num2
	 2. else if the operand is '-': subtract num2 from num1
		 1. print the difference between num1 and num2
	 3. else if the operand is '\*': multiply num1 by num2 
		 1. print the product of num1 and num2
	 4. else if the operand is '/': divide num1 by num2
		 1. if num2 is 0: give division by zero error
		 2. else: divide num1 by num2.
			 1. print the quotient of num1 and num2
	5. else, the operand the user inputted is not valid: give the user an error message


