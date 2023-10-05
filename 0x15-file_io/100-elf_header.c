#include "main.h"
#include <math.h>
/**
 * main - read elf file
 *@ac: number of parameters
 *@av: files passed as parameter
 * Return: 0 on success
 *
 */
int main(int ac, char **av)
{
	int f, i;
	char elf_file[50];
	ssize_t br;
	Elf64_Ehdr elfh;

	strcpy(elf_file, av[1]);
	if (ac != 2)
		exit(-1);
	f = open(elf_file, O_RDONLY);
	if (f == -1)
		exit(-1);
	br = read(f, &elfh, sizeof(Elf64_Ehdr));
	if (br == -1)
		exit(-1);
	printf("ELF Header:\n  Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elfh.e_ident[i]);
	printf("\n");
	printf("  Class: ELF%d\n",
			(elfh.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32));
	printf("  Data: ");
	printf("2's complement, little endian\n");
	printf("  Version: %d (current)\n",
			elfh.e_ident[EI_VERSION]);
	printf("  OS/ABI: ");
	printf("UNIX - System V\n");
	printf("  ABI Version: %d\n",
			elfh.e_ident[EI_ABIVERSION]);
	printf("  Type: EXEC (Executable file)");
	printf("\n");
	printf("  Entry point address: 0x%lx\n",
			(unsigned long)elfh.e_entry);
	close(f);
	return (0);
}
