//Asking the user for input

#include <stdio.h>

int main (void)
{

    int n = 1; 
    int number, triangularNumber;

    printf("What triangular number do you want? ");

    scanf ("%i", &number);

    triangularNumber = 0;

    while (n <= number){
        triangularNumber += n;
        n++;
    }

    printf ("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}