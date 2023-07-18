#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - create a new dog
 * @name: name param
 * @age: age param
 * @owner: owner param
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (name[i++] != '\0')
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	while (owner[j++] != '\0')
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';
	dog->age = age;
	return (dog);
}
