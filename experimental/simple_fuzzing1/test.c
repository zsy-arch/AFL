#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char s[100];
	scanf("%s", s);

	if (s[0] == 'a')
	{
		if (s[1] == 'b')
		{
			if (s[2] == 'c')
			{
				printf(s);
			}
		}
	}

	if (!strcmp(s, "foobar123"))
	{
		abort();
	}
	else
	{
		printf("input: %s\n", s);
	}
	
	return 0;
}
