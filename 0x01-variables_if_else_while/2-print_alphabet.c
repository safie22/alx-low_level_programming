#include <stdio.h>

/**
 * main - entry point
 *
 * Description:Write a program that prints the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z') /* for betty*/
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
