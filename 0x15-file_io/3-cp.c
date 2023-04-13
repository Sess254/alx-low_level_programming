/*
 *File: 3-cp.c
 *Auth: Sess254
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *give_buffer(char *file);
void close_file(int fd);

/**
 * give_buffer - gives 1024  bytes for buffer
 *@file: name of the file
 *
 *Return: pointer to new buffer.
 */
char *give_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 *close_file - close file descriptor
 *@fd: file descriptor to be closed
 */
void close_file(int fd)
{
	int fc;

	fc = close(fd);

	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(100);
	}
}


/**
 *main - copies contents of a file to another file
 *@argc: number of arguments supplied to the program
 *@argv: array of pointers to the arguments
 *
 *Return: if argument count is incorrect - exit code 97
 * if file_from does not exist - exit code 97
 * if file_to fails - exit code 99
 * if file descriptor cannot close - exit code 100.
 * if successfull - 0.
 */

int main(int argc, char *argv[])
{
	int from, to, fr, fw;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = give_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	fr = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (fr > 0)
	{

		if (from == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		fw = write(to, buff, fr);
		if (to == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		fr = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}


	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}


