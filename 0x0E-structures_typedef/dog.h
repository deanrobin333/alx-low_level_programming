#ifndef _DOG_H_
#define _DOG_H_

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

/* 1-init_dog.c */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
