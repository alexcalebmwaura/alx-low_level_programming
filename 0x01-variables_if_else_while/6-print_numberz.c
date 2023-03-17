#include<stdio.h>
/**
 * main - Entry point
 * description: Code run
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[10] = "0123456789";
int i;

for (i = 0; i < 10; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
