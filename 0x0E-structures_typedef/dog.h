#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A user define data types that takes
 * in other different data types.
 *
 * @name: structure member 1
 * @age: structure member 2
 * @owner: structure member 3
 * Description: defining a struct in C program
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
void print_dog(struct dog *d)
dog_t *new_dog(char *name, float age, char *owner)

#endif
