#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argc
 * @av: argv
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	/*var 4 str and count*/
	char *s;
	int wrd, let, index, size = ac;
	
	/*Returns NULL if ac == 0 or av == NULL*/
	if (ac == 0 || av == NULL)
		return (NULL);

	for (wrd = 0; wrd < ac; wrd++)
	{
		for (let = 0; av[wrd][let]; let++)
			size++;
	}

	/*malloc var*/
	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	index = 0;

	for (wrd = 0; wrd < ac; wrd++)
	{
		for (let = 0; av[wrd][let]; let++)
			s[index++] = av[wrd][let];

		s[index++] = '\n';
	}

	s[size] = '\0';

	return (s);
}
