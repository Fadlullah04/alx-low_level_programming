#ifndef DOG_H
#define DOG_H
#include<stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - structure containig data of a dog
 * @name: name of the dog
 * @age: age of a dog
 * @owner: owner of dog
 *
 * Description: contains dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
