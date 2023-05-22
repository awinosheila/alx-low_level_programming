#ifndef dog_h
#define dog_h

/**
 * struct dog - a dog's information
 * @name: First info
 * @age: Second info
 * @owner: Third info
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_p - typedef for struct dog
 */
typedef struct dog dog_p;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_p *new_dog(char *name, float age, char *owner);
void free_dog(dog_p *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
