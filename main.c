#include <stdio.h>
#include <string.h>

const char * cat[7] = {" ^__^\n","(,  ,)\n",">/7Y/<\n","(    )\n","| __ |\n","| || |\n","[_][_]\n"};

void printcat(unsigned char * vpos)
{
	for (unsigned char i = 0; i < sizeof(cat)/8; i++)
	{
		for (unsigned char it = 0; it < *vpos-2; it++)
		{
			printf(" ");
		}
		printf("%s", cat[i]);
	}
}

int main(int argc, char ** argv)
{
	if (argc < 1)
	{
		printf("One argument required!\n");
		return -1;
	}
	if (argc > 2)
	{
		printf("Only one argument required\n  USAGE: catsay <words>\nIt's recommended to put the words in quotes so the words get sent as one argument.\n");
		return -1;
	}

	for (int i = 1; i < argc; i++)
	{
		unsigned char vpos = 0;

		printf("\n ");
		for (int it = 1; it <= strlen(argv[i]); it++)
		{
			printf("_");
		}
		printf(" \n(");
		printf("%s", argv[i]);
		printf(")\n(");
		for (int it = 1; it <= strlen(argv[i]); it++)
		{
			if (it != strlen(argv[i])-1)
			{
				printf("_");
			}
			else {
				printf(" ");
			}
		}
		printf(")\n ");
		for (int it = 1; it <= strlen(argv[i]); it++)
		{
			if (it != strlen(argv[i])-1 && strlen(argv[i]) > 1)
			{
				printf(" ");
			}
			else {
				vpos = it;
				printf("v");
			}
		}
		printf("\n");
		printcat(&vpos);
	}

	return 0;
}
