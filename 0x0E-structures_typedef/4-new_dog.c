#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - dog's new prop with stuct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: ptr to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}

/**
 * _strlen - string length
 * @s: string
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;

	return (x);
}

/**
 * _strcpy - copies string from src to dest
 * @dest: string destination/ original string
 * @src: string source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
