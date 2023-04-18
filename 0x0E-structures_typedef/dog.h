#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - represents a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
