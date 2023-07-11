#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function to combine strings
 * @s1: string one.
 * @s2: string two
 *
 * Return: s1 con s2.
 **/

char *str_concat(char *s1, char s2)
{
	char *con; /* concatinated string */
	int j, i; /* iterators to count with */

	j = 0;
	i = 0;
	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		s2 = ""; /* When NULL is passed as arguments to the function*/
	while (s1[j] != '\0') /* count length of s1 */
		j++;
	while (s2[i] != '\0') /* count length of s2 */
		j++;
	con = malloc(sizeof(char) * (i + j + 1));

	if (con == NULL)
		return (NULL); /* fails to run */
	j = i = 0;
	/* getting full string*/
	while (s1[j] != '\0')
	{
		con[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		con[j] = s2[i];
		j++, i++;
	}
	con[j] = '\0';
	return (con); /* return result of con*/
}
