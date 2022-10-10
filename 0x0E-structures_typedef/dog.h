#include <stdio.h>
#include <stdlib.h>

/*
 * dog - structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
struct dog my_dog(char *name, float age, char *owner)
{
	struct dog *user;

	user = malloc(sizeof(struct dog));

	user -> name = name;
	user -> age = age;
	user -> owner = owner;

	return (user);
}
