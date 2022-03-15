#include "main.h"
/**
 * print_alphabet_x10(void)
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i, j;
i = 0
while (i < 10)
{
j = 0;
while (j < 26)
{
putchar(alphabet[j]);
j++;
}
putchar('\n');
i++;
}
}
