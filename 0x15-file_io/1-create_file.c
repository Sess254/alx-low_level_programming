/*
 *File: 1-create_file.c
 *Auth: Sess254
 */

#include "main.h"

/**
 *create_file - function that creates a file
 *@filename: pointer to name of file to create
 *@text_content: pointer to the string to write to the file
 *
 *Return: if it fails -1, otherswise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int file_o, file_w, strlen;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}

	file_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_w = write(file_o, text_content, strlen);

	if (file_o == -1 || file_w == -1)
	{
		return (-1);
	}

	close(file_o);

	return (1);
}

