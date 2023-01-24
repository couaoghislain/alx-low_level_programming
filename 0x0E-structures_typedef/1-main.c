#Inclure <stdio.h>
#inclure « chien.h »

/**
 * main - vérifiez le code pour les étudiants de l’école ALX.
 *
 * Retour: Toujours 0.
 */
int main(void)
{
    my_dog de chien de struct;

    init_dog(&my_dog, « Poppy », 3.5, « Bob »);
    printf(« Je m’appelle %s, et je suis %.1f :) - Woof! \n », my_dog. nom, my_dog. âge);
    retour (0);
}
