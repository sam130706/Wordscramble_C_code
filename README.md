# Wordsramble_C_code
##  Description
An interactive word scramble game written in C where players are given a jumbled word and must guess the correct word. The game includes multiple rounds, difficulty levels, and score tracking to enhance user interaction.


## Features
- Random word generation
- Difficulty selection (Easy / Medium / Hard)
- Multiple rounds gameplay
- Score tracking system
- User input validation


## Technologies Used
- C Programming
- Standard C Libraries (`stdio.h`, `string.h`, `stdlib.h`)


## How It Works
1. The program selects a word randomly from a predefined list.
2. The word is scrambled using a logic-based algorithm.
3. The player is prompted to guess the correct word.
4. The program checks the input and updates the score.
5. The game continues for multiple rounds.

## Sample Input & Output
Sample Input:

Select Difficulty:
1. Easy
2. Medium
3. Hard
Enter choice: 1

Your guess: cat
Your guess: dog
Your guess: sun
...
Play again? n

Sample Output:

==== WORD SCRAMBLE GAME ====

Select Difficulty:
1. Easy
2. Medium
3. Hard
Enter choice: 1

Round 1
Scrambled word: tca
Your guess: cat
Correct! 

Round 2
Scrambled word: gdo
Your guess: dog
Correct! 

Round 3
Scrambled word: nus
Your guess: sun
Correct! 

...

Final Score: 5/5

Play again? (y/n): n

Thanks for playing!



