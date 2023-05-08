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
	ssize_t file_o, file_w, file_r;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		return (0);
	}

	file_o = open(filename, O_RDONLY);
	file_r = read(file_o, buff, letters);
	file_w = write(STDOUT_FILENO, buff, file_r);

	if (file_o == -1 || file_r == -1 || file_w != file_r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(file_o);

	return (file_w);
}
