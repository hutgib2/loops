#include <stdio.h>

//  this program prints a square of hashtags at a chosen size

int main(void)
{
    int i;
    int j;
    int size;
    
    size = 4;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size) //we have used 2 loops so that we can choose the length of the square
        {
            printf("#");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
}