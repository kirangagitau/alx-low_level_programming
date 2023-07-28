#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own operation code
 * @argc: count of arguments
 * @argv: vector array of given argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]) /* arguments to the main function  */
{
	int bytes, i; /* iterator variable and byte for size  */
	char *arr;

	if (argc != 2) /* for wrong argc */
	{
		printf("Error\n");
		exit(1);
	}


	bytes = atoi(argv[1]); /* coverts vector argument to type int */

	if (bytes < 0) /* byte can not be negative */
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]); /* hexadecimal value with two digits*/
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0); /* final exit status for success run  */
}
