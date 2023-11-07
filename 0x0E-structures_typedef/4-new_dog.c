#include "dog.h"
#include <stdio.h>

/**
 * _strlen - fucnation that find the lenth of string
 * @str: the string 
 * Return: the lenth of the string
*/

int _strlen(const char *str)
{
int lenth =0;
while (*str++)
{
    lenth ++;
}
return(lenth);
}

/**
 * _strcopy - funcation that copy string 
*/

char *_strcopy(char *dest,char *src){

    int i;
    for ( i = 0; src[i]; i++)
    {
        dest[i]=src[i];
    }
    dest[i]='\0';
    return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
*/

dog_t *new_dog(char *name, float age, char *owner)
{



}
