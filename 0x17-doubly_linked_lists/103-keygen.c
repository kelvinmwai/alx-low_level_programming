#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates key for the crackme5 executable.
 * @argc: number of arguments to the program.
 i* @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *code;
	int len = strlen(argv[1]), y, tmp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	pass[0] = code[tmp];

	tmp = 0;
	for (y = 0; y < len; y++)
		tmp += argv[1][y];
	pass[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (y = 0; y < len; y++)
		tmp *= argv[1][y];
	pass[2] = code[(tmp ^ 85) & 63];

	tmp = 0;
	for (y = 0; y < len; y++)
	{
		if (argv[1][y] > tmp)
			tmp = argv[1][y];
	}
	srand(tmp ^ 14);
	pass[3] = code[rand() & 63];

	tmp = 0;
	for (y = 0; y < len; y++)
		tmp += (argv[1][y] * argv[1][y]);
	pass[4] = code[(tmp ^ 239) & 63];

	for (y = 0; y < argv[1][0]; y++)
		tmp = rand();
	pass[5] = code[(tmp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
