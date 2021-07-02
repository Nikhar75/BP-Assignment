// Program to Check Whether a Character is an Alphabet or not in C Language

#include <stdio.h>
int main()
{
    char ch;

    //Asking user to enter the character
    printf("Enter any character: ");
    //storing the entered character into the variable ch
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("The entered character %c is an Alphabet",ch);
    else
        printf("The entered character %c is not an Alphabet",ch);

    return 0;
}