#ifndef DOG
#define DOG
/**
 * struct dog- information about dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG */
