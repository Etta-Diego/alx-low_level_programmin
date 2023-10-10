#ifndef DOG_H
#define DOG_H

/**
 * struct dog - user defined structure
 * @name: character element of the structure
 * @owner: character element of the structure
 * @age: float element of the structure
 */


struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
