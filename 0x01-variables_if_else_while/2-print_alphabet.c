#include<stdio.h>
#include<ctype.h>
/**
 * main -is the main entry of the program and it prints lower case alphabet
 *
 * Return:always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
