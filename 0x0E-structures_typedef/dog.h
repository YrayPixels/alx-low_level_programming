
#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - define a new type of struct
 * @name: first member
 * @age: second member
 * @owner: thirds member
 *
 * Description: this is struct for dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
