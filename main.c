/*
 	Copyright (c) 2022 Nicholas Kelly

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.

	catsay:
	 _______________________________________________________________
	(This is catsay! A terrible recreation of cowsay but with a cat.)
	(_____________________________________________________________ _)
	                                                              v
	                                                             ^__^
	                                                            (,  ,)
	                                                            >/7Y/<
	                                                            (    )
	                                                            | __ |
	                                                            | || |
	                                                            [_][_]
*/


#include <stdio.h>
#include <string.h>

// Default character
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
	if (argc < 2)
	{
		printf("Check out %s -h or %s --help\n", argv[0], argv[0]);
		return -1;
	}
	if (argc > 3)
	{
		printf("Check out %s -h or %s --help\n", argv[0], argv[0]);
		return -1;
	}

	if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
	{
		printf("USAGE: %s <words>\n", argv[0]);
		return 0;
	}

	unsigned char vpos = 0;

	printf(" ");
	for (unsigned char i = 1; i <= strlen(argv[1]); i++)
	{
		printf("_");
	}
	printf(" \n(");
	printf("%s", argv[1]);
	printf(")\n(");
	for (unsigned char i = 1; i <= strlen(argv[1]); i++)
	{
		if (i != strlen(argv[1])-1)
		{
			printf("_");
		}
		else {
			printf(" ");
		}
	}
	printf(")\n ");
	for (unsigned char i = 1; i <= strlen(argv[1]); i++)
	{
		if (i != strlen(argv[1])-1 && strlen(argv[1]) > 1)
		{
			printf(" ");	
		}
		else {
			vpos = i;
			printf("v");
		}
	}
	printf("\n");
	printcat(&vpos);

	return 0;
}
