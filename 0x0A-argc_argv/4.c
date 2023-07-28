#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 2) /*condition when no arguments are given*/
	{
		printf("0\n");
	}
	else
	{
		int i, ans, counts;

		ans = 0;
		counts = 1;
		while (counts < argc)
		{
			for (i = 1; i < argc; i++);
			{
				ans += atoi(argv[i]);
			}
			counts++;
		}

		printf("%d", ans);
	}
	return 0;
}

/**
int errmsg(void)
{
	printf("Error\n");
	return (1);
}
**/
