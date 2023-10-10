#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <elf.h>

int main(int argc, char **argv);
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: an array of strings
 * Return: Always 0 Success.
 */
int main(int argc, char **argv)
{
	char *filename;
	FILE *f;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(1);
	}

	filename = argv[1];
	f = fopen(filename, "rb");
	if (f == NULL)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	/* Seek to the beginning of the file */
	if (fseek(f, 0, SEEK_SET) != 0)
	{
		fprintf(stderr, "Error seeking to beginning of file\n");
		exit(98);
	}

	/* Read the ELF header */
	if (fread(&header, sizeof(header), 1, f) != 1)
	{
		fprintf(stderr, "Error reading ELF header\n");
		exit(98);
	}

	/* Check if the file is a valid ELF file */
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "File is not a valid ELF file\n");
		exit(98);
	}

	/* Display the ELF header information */
	printf("Magic:   %08x\n", header.e_ident[EI_MAG0] |
			header.e_ident[EI_MAG1] << 8 |
			header.e_ident[EI_MAG2] << 16 |
			header.e_ident[EI_MAG3] << 24);
	printf("Class:    %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:     %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:  %x\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:    %x\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %x\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:      %x\n", header.e_type);
	printf("Entry point address: %016lx\n", header.e_entry);

	fclose(f);

	return (0);
}

