#ifndef dog_h
#define dog_h
/**
*struct dog - new type
*@name: dog name
*@age: dog age
*@owner: dog owner
*
**/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
