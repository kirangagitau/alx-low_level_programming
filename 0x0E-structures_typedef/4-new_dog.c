#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - func creatng new dog
 * @name:  dogs new name
 * @age: dogs new age
 * @owner: dogs new owner
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
