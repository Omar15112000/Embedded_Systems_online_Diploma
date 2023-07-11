/*
 * ass2ex5.c
 *
 *  Created on: Jul 11, 2023
 *      Author: hp
 */
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
   fflush(stdin);fflush(stdout);
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("%c is an alphabet.", c);
    } else {
        printf("%c is not an alphabet.", c);
    }
    return 0;
}



