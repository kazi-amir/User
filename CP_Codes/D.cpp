#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char noun[100][100] = {"Moushi", "Hamza", "Mim", "Cat", "Boltu", "pizza"};
char pronoun[100][100] = {"I", "you", "he", "she", "me"};
char verb[100][100] = {"do", "work", "eat", "run", "swim"};
char adjective[100][100] = {"big", "small", "happy", "sad", "red"};
char adverb[100][100] = {"quickly", "very", "yesterday", "here", "extremely"};
char preposition[100][100] = {"in", "on", "at", "with", "from"};
char conjunction[100][100] = {"and", "but", "or", "so", "because"};
char interjection[100][100] = {"Wow", "Ouch", "Hey", "Oh", "Oops"};


int main() {
    char str[100];
    fgets(str, 100, stdin);

    int lenNoun = sizeof(noun) / sizeof(noun[0]);
    int lenPron = sizeof(pronoun) / sizeof(pronoun[0]);
    int lenVerb = sizeof(verb) / sizeof(verb[0]);
    int lenAdj = sizeof(adjective) / sizeof(adjective[0]);
    int lenAdv = sizeof(adverb) / sizeof(adverb[0]);
    int lenPrep = sizeof(preposition) / sizeof(preposition[0]);
    int lenConj = sizeof(conjunction) / sizeof(conjunction[0]);
    int lenInte = sizeof(interjection) / sizeof(interjection[0]);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            //Meaw
        }
        else {
            str[i] = ' ';
        }
    }

    char *p = strtok(str, " ");
    while (p != NULL) {
        printf("%s: ", p);
        int isFound = 0; //if any parts of speeh is similar
        // is a noun?
        for (int i = 0; i < lenNoun; i++) {
            if (strcmp(noun[i], p) == 0) {
                printf("Noun\n");
                isFound = 1;
                break;
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenPron; i++) {
                if (strcmp(pronoun[i], p) == 0) {
                    printf("Pronoun\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenVerb; i++) {
                if (strcmp(verb[i], p) == 0) {
                    printf("Verb\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenVerb; i++) {
                if (strcmp(verb[i], p) == 0) {
                    printf("Verb\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenAdj; i++) {
                if (strcmp(adjective[i], p) == 0) {
                    printf("Adjective\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenAdv; i++) {
                if (strcmp(adverb[i], p) == 0) {
                    printf("Adverb\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenPrep; i++) {
                if (strcmp(preposition[i], p) == 0) {
                    printf("Preposition\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenConj; i++) {
                if (strcmp(conjunction[i], p) == 0) {
                    printf("Conjunction\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            for (int i = 0; i < lenInte; i++) {
                if (strcmp(interjection[i], p) == 0) {
                    printf("Interjection\n");
                    isFound = 1;
                    break;
                }
            }
        }
        if (isFound == 0) {
            printf("Unknown\n");
        }
        p = strtok(NULL, " ");
    }

}