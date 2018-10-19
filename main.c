/*
Write a program that shows the mode character (the most repeted character) of any given string.

Name: Óscar Rubén Gómez Ríos
Mail: A01411750@itesm.mx
Matricule Number: A01411750
Date: 18/10/2018
 */

#include <stdio.h>
#define x 1000
#define y 1000
#define z 200

int main() {

    char string[x];
    int c = 0;
    int a = 0;
    char nString[y];
    char cc[z];
    int repeatedValue = 0;
    int repetitions;

    printf("Give me any string please:\n");
    fgets(string, sizeof(string), stdin);

    while (string[c] != '\0') {

        if (string[c] != 32) {
            nString[a] = string[c];
            a++;
        }
        c++;
    }


    for (int i = 0; nString[i] != '\0'; i++) {
        cc[nString[i]]++;
    }


    for (int i = 0; i < 128; i++) {

        if (cc[i] > repeatedValue) {
            repeatedValue = cc[i];
            repetitions = i;
        }
    }

    printf("The most repeated letter of the string is: %c.", repetitions);

    return 0;

}