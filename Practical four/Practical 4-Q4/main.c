#include <stdio.h>
int main ()
{
    char letter;
    printf("Enter a letter");
    scanf(" %c",&letter);

    switch (letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("The entered letter is a vowel");break;
        default:printf("The entered letter is not a vowel \n");

}
