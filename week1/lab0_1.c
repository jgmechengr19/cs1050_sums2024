#include <stdio.h>

int main() {

    char firstname[20];
    char lastname[20];
    printf("Please enter your name: ");
    scanf("%s %s", firstname, lastname);
    // gets(firstname);
    printf("Hi %s %s, nice to meet you!\n", firstname, lastname);
    //printf("Hi %s, nice to meet you!\n", firstname);
    return 0;

}