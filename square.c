#include <stdio.h>

// in this program we have seperated the code into its own function and this makes our code more readable

// this line is the function prototype, it tells us what the function returns, the name of the function and the input variables
void draw_square(int size)
{ 
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size) 
        {
            printf("#");
            j = j+1;
        }
        printf("\n");
        i = i+1;
    }
}

int main(void)
{
    draw_square(4);   
}