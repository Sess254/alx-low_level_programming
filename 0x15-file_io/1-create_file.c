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
	int fo, fw, strln = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (strln = 0; text_content[strln];)
			strln++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC | S_IRUSR | S_IWUSR);
	fw = write(fo, text_content, strln);

	if (fo == -1 || fw == -1)
	{
		return (-1);
	}

	close(fo);

	return (1);
}
