/*
Anaya Ahanotu
CIS 123
Assignment: Lab #3b: Random Change
Objective: Create a game of heads and tails

Algorithm: 
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
9. if the coin is heads: tell the user and add a random value (between 0 and
    100, exclusive) to the user's balance 
10. else, coin is tails: tell the user but do not add any balance
11. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
12. round 2: prompt the user to press enter to flip the coin
13. use random to flip the coin (0- heads, 1- tails)
14. if the coin is heads: tell the user and add a random value (between 0 and 
    100, exclusive) to the user's balance 
15. else, coin is tails: tell the user but do not add any balance
16. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
17. round 3: prompt the user to press enter to flip the coin
18. use random to flip the coin (0- heads, 1- tails)
19. if the coin is heads: tell the user and add a random value (between 0 and
    100, exclusive) to the user's balance 
20. else, coin is tails: tell the user but do not add any balance
21. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
22. round 4: prompt the user to press enter to flip the coin
23. use random to flip the coin (0- heads, 1- tails)
24. if the coin is heads: tell the user and add a random value (between 0 and
    100, exclusive) to the user's balance 
25. else, coin is tails: tell the user but do not add any balance
26. if the balance is greater than 1: end the game
	1. tell the user they lost b/c their balance exceeded $1
	2. tell the user to rate the game
	3. thank user for the feedback
	4. end the game
27. round 5: prompt the user to press enter to flip the coin
28. use random to flip the coin (0- heads, 1- tails)
29. if the coin is heads: tell the user and add a random value (between 0 and
    100, exclusive) to the user's balance 
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
*/