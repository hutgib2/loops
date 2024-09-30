#include <stdio.h>

// this program prints all the different combinations of 3 digits

int main(void)
{
    int i;
    int j;
    int k;

    i = 1;
    while (i <= 7)
    {
        j = i + 1;  
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                printf("%d%d%d ", i, j, k);
                k++;
            }
            j++;
        }
        i++;  
    }
}