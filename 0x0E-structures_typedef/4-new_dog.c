#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - fucnation that find the lenth of string
 * @str: the string
 * Return: the lenth of the string
 */

int _strlen(const char *str)
{
	int lenth = 0;

	while (*str++)
	{
		lenth++;
	}
	return (lenth);
}

/**
 * _strcopy - funcation that copy string
 * @dest: destntion of copied string
 * @src: sorce of string
 *
 * Return: coppyed string
 */

char *_strcopy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: null if fail strauct pointer dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
