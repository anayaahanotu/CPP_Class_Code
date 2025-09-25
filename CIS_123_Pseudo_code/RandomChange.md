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

**Procedure**
1. declare string variable username
2. declare int coinState
3. declare char userRating
4. initialize int balance to be 0
5. Get the user's name using getline()
6. welcome the user and give them their starting balance
7. round 1: prompt the user to press enter to flip the coin
8. use random to flip the coin (0- heads, 1- tails)
9. if the coin is heads: tell the user and add a random value (between 0 and 100, exclusive) to the user's balance 
10. else, coin is tails: tell the user but do not add any balance
11. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
12. round 2: prompt the user to press enter to flip the coin
13. use random to flip the coin (0- heads, 1- tails)
14. if the coin is heads: tell the user and add a random value (between 0 and 100, exclusive) to the user's balance 
15. else, coin is tails: tell the user but do not add any balance
16. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
17. round 3: prompt the user to press enter to flip the coin
18. use random to flip the coin (0- heads, 1- tails)
19. if the coin is heads: tell the user and add a random value (between 0 and 100, exclusive) to the user's balance 
20. else, coin is tails: tell the user but do not add any balance
21. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
22. round 4: prompt the user to press enter to flip the coin
23. use random to flip the coin (0- heads, 1- tails)
24. if the coin is heads: tell the user and add a random value (between 0 and 100, exclusive) to the user's balance 
25. else, coin is tails: tell the user but do not add any balance
26. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
27. round 5: prompt the user to press enter to flip the coin
28. use random to flip the coin (0- heads, 1- tails)
29. if the coin is heads: tell the user and add a random value (between 0 and 100, exclusive) to the user's balance 
30. else, coin is tails: tell the user but do not add any balance
31. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
32. else: the balance is less than or equal to one: the user won the game
	1. tell the user they won
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game