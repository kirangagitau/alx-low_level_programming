#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function to concat two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: concat string
 **/

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, jo; /* iterators */

	if (s1 == NULL) /* null s1*/
		s1 = "";
	if (s2 == NULL) /* null s2 */
		s2 = "";
	i = jo = 0; /* initializing iterators */
	while (s1[i] != '\0') /* counting no. of char for s1  */
		i++;
	while (s2[jo] != '\0') /* counting number of char for s2  */
		jo++;
	con = malloc(sizeof(char) * (i + jo + 1)); /* alocate mem + final char */
	if (con == NULL) /*if no char given, return null */
		return (NULL);
	i = jo = 0; /* re-initializing iterators. */
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[jo] != '\0')
	{
		con[i] = s2[jo];
		i++, jo++;
	}
	con[i] = '\0';
	return (con);
}
