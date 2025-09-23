Write a program that creates a login name for a user, given the user's first name, last name, and a four-digit number string as input. Output the login name, which is made up of the first six letters of the first name, followed by the first letter of the last name, an underscore (_), and then the last digit of the number string. If the first name has less than six letters, then use all letters of the first name.

Ex: If the input is:

```
Michael Jordan 1991
```

the output is:

```
Your login name: MichaeJ_1
```

Ex: If the input is:

```
Nicole Smith 2024
```

the output is:

```
Your login name: NicoleS_4
```
# Algorithm
**Variables**
- firstName: string: user's first name
- lastName: string: user's last name
- num: string: user inputted four digit number
- username: string: the user's username

**Procedure**
1. declare firstName, lastName, username, and num as a string
2. initialize username as an empty string
3. prompt user to enter their first name --> save to firstName
4. prompt user to enter their last name --> save to lastName
5. prompt user to enter a four-digit number --> save to num
6. check length of firstName:
	1. if the length of firstName <= 6 characters: add full firstName to username
	2. else: add first 6 char of firstname to username
7. add the first character of lastName to the username
8. add the underscore to the username
9. add the last digit of the number string to the username
10. print out the username