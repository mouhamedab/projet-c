#include <gtk/gtk.h>

void ajouter_client( client c);
int exist_client(char*cin);
void supprimer_client(char*cin);
void modifier_client(char*cin,char*numtel,char*adresse,char*nationalite,char*date,char*nom,char*prenom);
void ajouter_reservation(achat e,int nb);
void modifier_achat(achat e,int nb);
int exist_clientnumtel(char*numtel);
int nombre(char nationalite[]);
int nombrec(char numtel[]) ;
int nombreres(char element[]);
int calculer_prix_max(int num);
int verifier(cverif v);