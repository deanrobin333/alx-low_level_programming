#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h> /* for malloc */
/**
 * struct dog - new type for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Dog type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/* 1-init_dog.c */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* 2-print_dog.c */
void print_dog(struct dog *d);

/* 4-new_dog.c */
dog_t *new_dog(char *name, float age, char *owner);

/* 5-free_dog.c */
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
