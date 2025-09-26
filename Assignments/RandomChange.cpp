/*
Anaya Ahanotu
CIS 123
Assignment: Lab #3b: Random Change
Objective: Create a game of heads and tails

Algorithm
**Variables**
* username: string: the user's name
* balance: int: how much money the user has:
	* starting: 0
* userRating: char: how the user rates the game
* coinState: int: which side of the coin is facing up: 0 for heads, 1 for tails
* isWinning: bool: is the player winning
* additionalCurrency: double: amount to be added to user's balance
* nextRound: char: filler variable so user can press enter to move on to the next round
* myEngine: random_device: random number generator

**Procedure**
1. declare string variable username
2. declare int coinState
3. declare char userRating
4. declare bool isWinning
5. initialize double balance to be 0
6. initialize double additionalCurrency
7. initialize char nextRound
8. initialize random_device myEngine
9. set the random seed
10. Get the user's name using getline()
11. welcome the user and give them their starting balance
12. round 1: prompt the user to press enter to flip the coin
13. use random to flip the coin (0- heads, 1- tails)
14. if the coin is heads: tell the user and add a random value (between 0 and 99, inclusive) to the user's balance 
	1. set additionalBalance to (random number / 100.0)
	2. add the value of additionalBalance to balance
	3. tell the user they flipped heads and their new balance.
15. else, coin is tails: tell the user but do not add any balance
16. if the balance is greater than 1, user has lost. Set isWinning to false.
17. if the player is winning (isWinning): play round 2:
	1.  round 2: prompt the user to press enter to flip the coin
	2. use random to flip the coin (0- heads, 1- tails)
	3. if the coin is heads: tell the user and add a random value (between 0 and 99, inclusive) to the user's balance 
		1. set additionalBalance to (random number / 100.0)
		2. add the value of additionalBalance to balance
		3. tell the user they flipped heads and their new balance.
	4. else, coin is tails: tell the user but do not add any balance
	5. if the balance is greater than 1, user has lost. Set isWinning to false.
18. if the player is winning (isWinning): play round 3:
	1.  round 3: prompt the user to press enter to flip the coin
	2. use random to flip the coin (0- heads, 1- tails)
	3. if the coin is heads: tell the user and add a random value (between 0 and 99, inclusive) to the user's balance 
		1. set additionalBalance to (random number / 100.0)
		2. add the value of additionalBalance to balance
		3. tell the user they flipped heads and their new balance.
	4. else, coin is tails: tell the user but do not add any balance
	5. if the balance is greater than 1, user has lost. Set isWinning to false.
19. if the player is winning (isWinning): play round 4:
	1.  round 4: prompt the user to press enter to flip the coin
	2. use random to flip the coin (0- heads, 1- tails)
	3. if the coin is heads: tell the user and add a random value (between 0 and 99, inclusive) to the user's balance 
		1. set additionalBalance to (random number / 100.0)
		2. add the value of additionalBalance to balance
		3. tell the user they flipped heads and their new balance.
	4. else, coin is tails: tell the user but do not add any balance
	5. if the balance is greater than 1, user has lost. Set isWinning to false.
20. if the player is winning (isWinning): play round 5:
	1. round 1: prompt the user to press enter to flip the coin
21. use random to flip the coin (0- heads, 1- tails)
	1. if the coin is heads: tell the user and add a random value (between 0 and 99, inclusive) to the user's balance 
		1. set additionalBalance to (random number / 100.0)
		2. add the value of additionalBalance to balance
		3. tell the user they flipped heads and their new balance.
	2. else, coin is tails: tell the user but do not add any balance
	3. if the balance is greater than 1, user has lost. Set isWinning to false.

22. if the player is  still winning, tell the user they lost
	1. tell the user they won
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
23. else, the user has won
	1. 1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
*/

#include <iostream>
#include <iomanip>
#include <random> 
#include <cctype>
using namespace std;

int main(){
	//declare variables username, coinState, userRating, isWinning, balance
	//additionalCurrency
	string username;
	//coinState: 0 for heads, 1 for tails
	int coinState;
	char userRating;
	bool isWinning = true;
	double balance = 0.00;
	double additionalCurrency;
	//declare nextRound as a filler variable cin can input to
	//so the user can press "Enter" to roll again
	char nextRound;

	//declare myEngine to be able to generate random numbers
	random_device myEngine;

	//set the seed for random
	srand(time(0));

	//get the user's name
	cout << "What is your name: ";
	cin >> username;

	//welcome the user and give them their balance
	cout << "Hello, " + username + ". Your starting balance is: $" 
		<< fixed << setprecision(2) << balance << endl;

	//promt the user to press enter to begin flipping a coin
	cout << "Press enter to flip the coin.";
	cin.ignore();
	cin.get(nextRound);

	//flip the coin
	uniform_int_distribution<int> randomInt(0, 1);
	coinState = randomInt(myEngine);

	//if coinState == 0, coin is heads. Add money to the user's balance
	if (coinState == 0) {
		uniform_int_distribution<int> randomInt(0, 99);

		//divide the random number by 100 to add that amount of cents to the
		//balance
		additionalCurrency = randomInt(myEngine) / 100.0;
		balance += additionalCurrency;

		//tell the user their current balance
		cout << "You landed heads. You earned: $" << additionalCurrency 
			<< ". You have $" << balance << endl;
	}
	else {
		cout << "Phew! You landed tails! Your balance is still: $" << balance
			<< endl;
	}

	//if balance > 1, the user lost. Set isWinning to false.
	if ((1 - balance) < 0.01){
		isWinning = false;
	}

	//if the user is winning, play another round.
	//ROUND 2
	if (isWinning) {
		//promt the user to press enter to begin flipping a coin
		cout << "Press enter to flip the coin.";
		cin.get(nextRound);

		//flip the coin
		uniform_int_distribution<int> randomInt(0, 1);
		coinState = randomInt(myEngine);

		//if coinState == 0, coin is heads. Add money to the user's balance
		if (coinState == 0) {
			uniform_int_distribution<int> randomInt(0, 99);

			//divide the random number by 100 to add that amount of cents to the
			//balance
			additionalCurrency = randomInt(myEngine) / 100.0;
			balance += additionalCurrency;

			//tell the user their current balance
			cout << "You landed heads. You earned: $" << additionalCurrency 
				<< ". You have $" << balance << endl;
		}
		else {
			cout << "Phew! You landed tails! Your balance is still: $" 
				<< balance << endl;
		}

		//if balance > 1, the user lost. Set isWinning to false.
		if ((1 - balance) < 0.01){
			isWinning = false;
		}
	}

	//if the user is winning, play another round.
	//ROUND 3
	if (isWinning) {
		//promt the user to press enter to begin flipping a coin
		cout << "Press enter to flip the coin.";
		cin.get(nextRound);

		//flip the coin
		uniform_int_distribution<int> randomInt(0, 1);
		coinState = randomInt(myEngine);

		//if coinState == 0, coin is heads. Add money to the user's balance
		if (coinState == 0) {
			uniform_int_distribution<int> randomInt(0, 99);

			//divide the random number by 100 to add that amount of cents to the
			//balance
			additionalCurrency = randomInt(myEngine) / 100.0;
			balance += additionalCurrency;

			//tell the user their current balance
			cout << "You landed heads. You earned: $" << additionalCurrency 
				<< ". You have $" << balance << endl;
		}
		else {
			cout << "Phew! You landed tails! Your balance is still: $" 
				<< balance << endl;
		}

		//if balance > 1, the user lost. Set isWinning to false.
		if ((1 - balance) < 0.01){
			isWinning = false;
		}
	}

	//if the user is winning, play another round.
	//ROUND 4
	if (isWinning) {
		//promt the user to press enter to begin flipping a coin
		cout << "Press enter to flip the coin.";
		cin.get(nextRound);

		//flip the coin
		uniform_int_distribution<int> randomInt(0, 1);
		coinState = randomInt(myEngine);

		//if coinState == 0, coin is heads. Add money to the user's balance
		if (coinState == 0) {
			uniform_int_distribution<int> randomInt(0, 99);

			//divide the random number by 100 to add that amount of cents to the
			//balance
			additionalCurrency = randomInt(myEngine) / 100.0;
			balance += additionalCurrency;

			//tell the user their current balance
			cout << "You landed heads. You earned: $" << additionalCurrency 
				<< ". You have $" << balance << endl;
		}
		else {
			cout << "Phew! You landed tails! Your balance is still: $" 
				<< balance << endl;
		}

		//if balance > 1, the user lost. Set isWinning to false.
		if ((1 - balance) < 0.01){
			isWinning = false;
		}
	}

	//if the user is winning, play another round.
	//ROUND 5
	if (isWinning) {
		//promt the user to press enter to begin flipping a coin
		cout << "Press enter to flip the coin.";
		cin.get(nextRound);

		//flip the coin
		uniform_int_distribution<int> randomInt(0, 1);
		coinState = randomInt(myEngine);

		//if coinState == 0, coin is heads. Add money to the user's balance
		if (coinState == 0) {
			uniform_int_distribution<int> randomInt(0, 99);

			//divide the random number by 100 to add that amount of cents to the
			//balance
			additionalCurrency = randomInt(myEngine) / 100.0;
			balance += additionalCurrency;

			//tell the user their current balance
			cout << "You landed heads. You earned: $" << additionalCurrency 
				<< ". You have $" << balance << endl;
		}
		else {
			cout << "Phew! You landed tails! Your balance is still: $" 
				<< balance << endl;
		}

		//if balance > 1, the user lost. Set isWinning to false.
		if ((1 - balance) < 0.01){
			isWinning = false;
		}
	}

	//if the user still has a balance less than $1, tell the user they won
	if (isWinning) {
		cout << username << ", you won! Your balance remained under $1.00!"
			<< endl;
	}
	//else, the user lost. Tell the user they lost.
	else {
		cout << username << ", you lost because your balance exceeded $1.00."
			<< endl;
	}

	return 0;
}