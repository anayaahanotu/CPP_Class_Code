**Description**: 

You are writing an algorithm and program for the game "Tossing Coins for a Dollar Game". 

When the game begins, ask the user for their name. You should let them know their starting balance is $0.  During each round of the game, your program will toss a simulated coin and a simulated value of change.  When the coin is tossed, if it lands heads-up, add the value of your change to your balance.  For example, if a coin lands heads-up, a randomly generated 34 cents is added to your balance.  Nothing is added to your balance for coins that land tails-up.  You should toss your coin 5 times. The game is over when you toss your coin five times or your balance reaches one dollar or more.  If your balance is exactly one dollar, you win the game.  You lose if your balance is more than one dollar or you've exhausted your tosses.

At the end of the game, prompt them for their feedback on the game based on the following ratings (`E` for Excellent, `G` for Good, `F` for Fair, `P` for Poor). You should only allow single character entries for their response. You should output a goodbye message for the user with their name, thanking them for their feedback (print their rating based on their selection). 

**Example test run**: 

Welcome to the Coin Toss Game!  
Please enter your name: Andrea E Johnson  
Hello, Andrea E Johnson! Your starting balance is $0.00.

Toss #1: Heads! You earned $0.35.  
Current balance: $0.35

Toss #2: Heads! You earned $0.84.  
Current balance: $1.19

😬 Sorry, Andrea E Johnson. You lost — your balance exceeded $1.00.

Please rate the game (E = Excellent, G = Good, F = Fair, P = Poor): G

Thank you for your feedback, Andrea E Johnson! You rated the game as Good.  
Goodbye!
# Algorithm
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