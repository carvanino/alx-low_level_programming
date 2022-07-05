#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure declaration with tag name dog
 *
 * @name: structure member pointing to a char data type
 * @age: structure member pointing to a float data type
 * @owner: structure member pointing to a char data type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* struct dog */
