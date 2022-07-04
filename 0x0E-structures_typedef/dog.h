#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure declaration with tag name dog
 *
 * @name: structure member pointing to a char data type
 * @age: structure member pointing to a float data type
 * @owner: structure member pointing to a char data type
 */

struct dog{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

