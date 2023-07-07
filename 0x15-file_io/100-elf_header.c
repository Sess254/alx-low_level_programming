/*
 *File: 100-elf_header.c
 *Auth: Sess254
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 *check_elf - checks for elf file
 *@e_ident: pointer to array with elf magic numbers.
 *
 *Description: if file is not elf file - exit code 98
 */
void check_elf(unsigned char *e_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 &&
		    e_ident[idx] != 'E' &&
		    e_ident[idx] != 'L' &&
		    e_ident[idx] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}

	}
}

/**
 * print_magic - prints magic numbers
 * @e_ident: pointer to array of elf magic numbers
 *
 *Des: magic numbers seperated by space
 */
void print_magic(unsigned char *e_ident)
{
	int idx:

	printf("  Magic:  ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_ident[idx]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of an elf header
 *@e_ident: pointer to arry with the elf class
 */
void print_class(unsigned char *e_ident)
{
