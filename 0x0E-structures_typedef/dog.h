#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * typedef struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

dog_t *my_dog(struct dog *d, char *name, float age, char *owner);

#endif /*HOLBERTON_H*/
