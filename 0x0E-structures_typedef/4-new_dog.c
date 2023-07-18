#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - create a new dog
 * @name: name param
 * @age: age param
 * @owner: owner param
 *
 * Return: pointer to new dog, Null otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * strlen(name) + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
