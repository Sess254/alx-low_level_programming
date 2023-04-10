/*
 *File: 0-read_textfile.c
 *Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>


/**
 *read_textfile - reads a text file and prints it to the POSIX
 * standard input
 *@filename: pointer to the file name
 *@letters: number of letters the function should read and write
 *
 *Return: if filename is NULL or the function fails 0,
 * otherwise the number of bytes the functin can read and write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fo = open(filename, O_RDONLY);
	fr = read(fo, buff, letters);
	fw = write(STDOUT_FILENO, buff, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fo);

	return (fw);
}





