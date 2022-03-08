#ifndef dog_h
#define dog_h
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
#endif
