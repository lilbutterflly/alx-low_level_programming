#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i); /* after this line there should be a i++ to increment the value of i, otherwise i will forever be less then 10 which cause the infinite loop */
        }
        
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
