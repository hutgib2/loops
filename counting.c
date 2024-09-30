#include <stdio.h>

int main(void) // everything inside of main is our program
{
    int i; // declares an integar variable

    i = 1; // sets the variable i to 1
    while (i <= 10) // repeats the code inside the loop until i is less than or equal to 10
    {
        printf("%d ", i); // prints the value of i, %d signifies an integar
        i++;   // shorthand for i = i + 1
    }
}