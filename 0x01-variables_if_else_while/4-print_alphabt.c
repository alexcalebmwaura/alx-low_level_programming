#include<stdio.h>
/**
 * main - Entry point
 * description: Code run
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[24] = "abcdfghijklmnoprstuvwxyz";
int i;

for (i = 0; i < 24; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
