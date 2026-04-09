#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//jumbling the word
void jumble(char word[]) {
    int i, j;
    char temp;
    int len = strlen(word);

    for (i = 0; i < len; i++) {
        j = rand() % len;

        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

int main() {
    srand(time(0));

    // Word categories
    char *easy[] = {"cat","dog","sun","hat","pen","cup","bat","run","red","box"};
    char *medium[] = {"apple","table","chair","plant","water","light","mouse","phone","clock","bread"};
    char *hard[] = {"computer","keyboard","program","science","engineer","network","database","software","hardware","internet"};

    int difficulty, rounds = 5, score = 0;
    char guess[50], playAgain;

    printf("==== JUMBLED WORD GAME ====\n");

    do {
        score = 0;

        printf("\nSelect Difficulty:\n");
        printf("1. Easy\n2. Medium\n3. Hard\n");
        printf("Enter choice: ");
        scanf("%d", &difficulty);

        for (int r = 0; r < rounds; r++) {
            char word[50];

            // Pick word based on difficulty
            if (difficulty == 1) {
                strcpy(word, easy[rand() % 10]);
            } else if (difficulty == 2) {
                strcpy(word, medium[rand() % 10]);
            } else {
                strcpy(word, hard[rand() % 10]);
            }

            char original[50];
            strcpy(original, word);

            jumble(word);

            printf("\nRound %d\n", r + 1);
            printf("Jumbled word: %s\n", word);

            printf("Your guess: ");
            scanf("%s", guess);

            if (strcmp(guess, original) == 0) {
                printf("Correct! \n");
                score++;
            } else {
                printf("Wrong! Correct word: %s\n", original);
            }
        }

        printf("\nYour Score: %d/%d\n", score, rounds);

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}