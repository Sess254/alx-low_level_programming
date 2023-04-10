/*
 *File: 2-append_text_to_file.c
 *Auth: Sess254
 */

#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: pointer to name of file to append
 *@text_content: pointer to the string to write to the file
 *
 *Return: 1 if the file exits, -1 if the filename is NULL
 * -1 if the file does not exist, -1 if you dont have permission to write
 * the file
 */

int append_text_to_file(const char *filename, char *text_content)
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

	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, strln);

	if (fo == -1 || fw == -1)
	{
		return (-1);
	}

	close(fo);

	return (1);
}
