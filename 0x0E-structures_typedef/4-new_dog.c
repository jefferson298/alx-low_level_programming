#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: The string
 *
 * Return: This returns the length of the string
 *
 */
int _strlen(char *s)
{
	int g;

	g = 0;

	while (s[g] != '\0')
	{
		g++;
	}
	return (g);
}

/**
 * *_strcpy - A function that copies the string towards src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * @name: name of the dog to be created
 * @age: Dog's age
 * @owner: Dog's Owner
 *
 * Return: new dog (Success), else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln, ln1;

	ln = _strlen(name);
	ln1 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ln + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ln1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
