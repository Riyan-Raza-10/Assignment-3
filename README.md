a🪢 HANGMAN ON GUESS
A Terminal Word-Guessing Challenge — Guess Correctly or the Man Gets Hanged!
________________________________________
🎮 About the Game
Hangman on Guess is a classic word-guessing game implemented in C.
You have 6 chances to guess the hidden word letter by letter.
Each wrong guess adds a part to the hangman.
If you reach 6 mistakes, the man is fully drawn — and you lose.
If you guess the entire word correctly, you save the man!
________________________________________
✨ Features
•	Simple & clean C implementation
•	ASCII-art hangman drawing
•	Real-time updates after every guess
•	Letter-by-letter input
•	Victory and defeat messages
•	Only uses basic libraries (stdio.h, string.h)
________________________________________
🧠 How to Play
1.	The game selects a secret word (in this version: "vampire").
2.	You guess letters one at a time.
3.	Correct letters appear in the word.
4.	Incorrect letters increase your mistake counter.
5.	Once mistakes reach 6, the man is hanged — game over.
________________________________________
🧩 Controls
Input	Action
a–z	Guess a letter
any other key	Treated as a letter input
Game runs until you guess the word or reach 6 mistakes	
________________________________________
🖥️ How to Compile & Run
Windows
gcc hangman.c -o hangman.exe
hangman.exe
Make sure you have GCC installed (via MinGW or similar).
________________________________________
📌 Code Overview
displayHangman(int mistakes)
Draws the ASCII hangman depending on the number of incorrect guesses.
main()

Handles:
•	Initializing the secret word
•	Tracking guessed letters
•	Counting mistakes
•	Displaying the hangman
•	Game logic loop
________________________________________
📝 Customization
You can easily customize the game:
Change the secret word:
char word[] = "vampire";
Add difficulty levels
(easy: long words, hard: short words)
________________________________________
🏆 Winning & Losing
✔ Win
If guessed letters match the secret word:
____YOU_SAVED_A_LIFE!!!____

❌ Lose
If mistakes reach 6:
____YOU_KILLED_THE_MAN!!!____
________________________________________
❤️ Author : 
Riyan Raza
