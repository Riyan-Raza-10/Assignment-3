#include <stdio.h>
#include <string.h>

/*				________ATTENTION_MATES________

				NAME OF THE GAME : HANGMAN ON GUESS
				HOW TO PLAY  : YOU GET 6 ATTEMPTS TO GUESS A WORD , LETTER BY LETTER !! 
 								IF YOU FAIL TO GUESS , YOU'LL LOSE AND A MAN WILL BE HANGED TO DEATH!!
*/


void displayHangman(int mistakes) {
	
    printf("\n");
    printf(" _______\n");
    printf(" |     |\n");
    printf(" |     %c\n", (mistakes >= 1 ? 'O' : ' '));
    printf(" |    %c%c%c\n",
           (mistakes >= 3 ? '/' : ' '),
           (mistakes >= 2 ? '|' : ' '),
           (mistakes >= 4 ? '\\' : ' '));
    printf(" |    %c %c\n",
           (mistakes >= 5 ? '/' : ' '),
           (mistakes >= 6 ? '\\' : ' '));
    printf(" |\n");
    printf("_|_\n\n");
}

int main() {
	printf("____________________________________________GUESS_OR_DIE____________________________________________\n\n");
	printf("\n\n	HOW TO PLAY  : YOU GET 6 ATTEMPTS TO GUESS A WORD , LETTER BY LETTER!! \n\t\t\tIF YOU FAIL TO GUESS , YOU'LL LOSE AND A MAN WILL BE HANGED TO DEATH!!\n\n");

	
    char word[] = "vampire";  // The secret word
    int len = strlen(word);

    char guessed[20] = {0};  // filled with underscores
    for (int i = 0; i < len; i++) guessed[i] = '_';

    int mistakes = 0;
    char guess;
    int correct;

    while (mistakes < 6) {
        displayHangman(mistakes);

        // Print guessed letters
        printf("Word: ");
        for (int i = 0; i < len; i++)
            printf("%c ", guessed[i]);
        printf("\n");

        // Ask for guess
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // Check guess
        correct = 0;
        for (int i = 0; i < len; i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                correct = 1;
            }
        }

        if (!correct) {
            mistakes++;
            printf("Wrong guess!\n");
        }

        // Check if player won
        if (strcmp(word, guessed) == 0) {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            printf("____YOU_SAVED_A_LIFE!!!____");
            break;
        }
    }

    if (mistakes >= 6) {
        displayHangman(mistakes);
        printf("You lost! The word was: %s\n", word);
        printf("____YOU_KILLED_THE_MAN!!!____");
		system("pause");
    }

    return 0;
}


