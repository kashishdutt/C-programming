#include <stdio.h>

int main() {
    // QUIZ GAME

    char question[][100] = {"What is the largest planet in the solar system?"};
    char options[][100] = {"A. Earth\nB. Saturn\nC. Jupiter\nD. Moon"};
    char answerKey[] = {'C'};
    
    int questionCount = sizeof(question) / sizeof(question[0]);
    char guess;
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++) {
        printf("%s\n", question[i]);
        printf("%s\n", options[i]);
        printf("Your answer: ");
        scanf(" %c", &guess); // Accept user input

        // Check the answer
        if (guess == answerKey[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n", answerKey[i]);
        }
    }

    printf("Your final score: %d/%d\n", score, questionCount);

    return 0;
}
