#include "dog.h"
#include <stdlib.h>
/**
  * _strlen - returns the length of a string
  * @s: takes in a string
  * Return: i, string length
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;


	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	dog_name = malloc(_strlen(name) + 1);
	if (dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	dog_owner = malloc(_strlen(owner) + 1);
	if (dog_owner == NULL)
	{
		free(new_dog);
		free(dog_name);
		return (NULL);
	}

	_strcpy(dog_name, name);
	_strcpy(dog_owner, owner);

	new_dog->age = age;
	new_dog->name = dog_name;
	new_dog->owner = dog_owner;

	return (new_dog);
}
