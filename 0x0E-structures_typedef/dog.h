#ifndef DOG_H
#define DOG_H

/**
 * struct - define a new type
 * @name: char type
 * @age: the age in float type.
 * @owner: the owner in char type
 * Description: structure to store dog info
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


#endif
