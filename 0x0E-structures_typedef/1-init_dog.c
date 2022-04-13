#include "dog.h"

/**
 * init_dog - void function that initializes a variable
 * @d: pointer to the address of the initialized variable
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: return an initialized variable.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		struct dog (*d).name = name;
		struct dog (*d).age = age;
		struct dog (*d).owner = owner;
	}
}
