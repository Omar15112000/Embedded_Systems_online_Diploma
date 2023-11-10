/*
 * ass2ex2.c
 *
 *  Created on: Jul 10, 2023
 *      Author: hp
 */
#include <stdio.h>
#include <stdio.h>

int main() {
    char alphabit;
    printf("Enter an alphabet: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &alphabit);

    if (alphabit == 'a' || alphabit == 'A') {
        printf("%c is a vowel", alphabit);
    } else if (alphabit == 'e' || alphabit == 'E') {
        printf("%c is a vowel", alphabit);
    } else if (alphabit == 'i' || alphabit == 'I') {
        printf("%c is a vowel", alphabit);
    } else if (alphabit == 'o' || alphabit == 'O') {
        printf("%c is a vowel", alphabit);
    } else if (alphabit == 'u' || alphabit == 'U') {
        printf("%c is a vowel", alphabit);
    } else {
        printf("%c is a consonant", alphabit);
    }

    return 0;
}
