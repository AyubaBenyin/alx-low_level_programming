#include <unistd.h>

/**
 * main - Entry point
 * 
 * Return: Always  0 (Success).
 */
int main(void)
{
        char word[8] = "_putchar";
        int a;

        for (a = 0; a < 9; a++)
                _putchar(word[a]);
        _putchar('\n');

        return (0);
}
