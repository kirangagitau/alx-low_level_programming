#include <stdio.h>
/**
 * @Author gitau Muguro
 *
 * main - A program to print alphabets both lower-case and in upper-case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char S,s;

	s = 'a';
	S = 'A';
	while 
		(s <= 'z')
		{
			putchar(s);
			s++;
		}
	putchar('\n');
	while
		(S <= 'Z')
		{
			putchar(S);
			S++;
		}
	putchar('\n');
	return (0);
}
