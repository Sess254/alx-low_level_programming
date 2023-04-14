/*
 *File: 3-cp.c
 *Auth: Sess254
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *give_buff(char *file);
void close_file(int fd);

/**
 * give_buff - gives 1024  bytes for buffer
 *@file: name of the file
 *
 *Return: pointer to new buffer.
 */
char *give_buff(char *file)
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
	int file_close;

	file_close = close(fd);

	if (file_close == -1)
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
	char *buff;
	int file_from, file_to, file_read, file_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = give_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_read = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {

		if (file_from == -1 || file_read == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		file_write = write(file_to, buff, file_read);
		if (file_to == -1 || file_write == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		file_read = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (file_read > 0);


	close_file(file_from);
	close_file(file_to);

	return (0);
}


