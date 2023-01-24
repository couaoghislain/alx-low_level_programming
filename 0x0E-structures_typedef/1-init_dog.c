#inclure « chien.h »
#include <stdlib.h>

/**
 * init_dog - Initialise une variable de type struct dog.
 * @d : Le chien à initialiser.
 * @name: Le nom du chien.
 * @age: L’âge du chien.
 * @owner: Le propriétaire du chien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
 d->nom = nom;
 d->âge = âge;
 d->propriétaire = propriétaire;
	}
}
