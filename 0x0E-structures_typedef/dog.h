#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure containing my data tpes
 * @name:name of dog
 * @float:Age of dog
 * @owner:name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif
