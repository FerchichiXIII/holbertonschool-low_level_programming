#ifndef dog_h
#define dog_h
#include <stdio.h>
/**
 * struct dog - new type struct dog with the following elements
 * @name: char*
 * @age: float
 * @owner: char*
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
