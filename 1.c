CHALLENGE 1:
#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne personne;

    // Assignation des valeurs aux champs
    strcpy(personne.nom, "alaoui");
    strcpy(personne.prenom, "asaad");
    personne.age = 36;

    printf("Nom: %s\n", personne.nom);
    printf("Prenom: %s\n", personne.prenom);
    printf("Age: %d ans\n", personne.age);

    return 0;
}