#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct stores basic information about a dog,
 * including its name, age, and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
