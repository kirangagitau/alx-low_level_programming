#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struture defining the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: person who own the dog.
 *
 * Description - this struct stores info about the dog.
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 **/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
