#include<stdio.h>
#include<ctype.h>
/**
 * main -prints lowercase alphabet in reverse
 *
 * Return:0, if sucessful
 */
int main(void)
{
	char rv;

	/*
	 * loops through the alphabets from behind
	 * to print the alphabets in reverse
	 */
	for (rv = 'z' ; rv >= 'a' ; rv--)
		putchar(rv);
	putchar('\n');
	return (0);
}
