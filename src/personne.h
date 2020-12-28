#include <gtk/gtk.h>

typedef struct
{

char username[20];
char nom[20];
char prenom[30];
char password[30];
char role[10];


}Personne;

void ajouter_personne(Personne p);

int verif(char username[],char password[]);
