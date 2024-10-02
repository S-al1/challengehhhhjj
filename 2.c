
CHALLENGE 2:
#include <stdio.h>

#define MAX_NOTES 5

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[MAX_NOTES];
};

int main() {
   
    struct Etudiant etudiant;

    snprintf(etudiant.nom, sizeof(etudiant.nom), "darkaoui");
    snprintf(etudiant.prenom, sizeof(etudiant.prenom), "naima");
    
    etudiant.notes[0] = 11;
    etudiant.notes[1] = 10;
    etudiant.notes[2] = 5;
    etudiant.notes[3] = 15;
    etudiant.notes[4] = 20;

    printf("Nom: %s\n", etudiant.nom);
    printf("Prénom: %s\n", etudiant.prenom);
    printf("Notes: ");
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");