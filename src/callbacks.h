#include <gtk/gtk.h>
  GtkWidget *acceuil;
  GtkWidget *gestion;

typedef struct client client;
struct client{
char cin[30];
char nom[30];
char prenom[30];
char adresse[30];
char numtel[30];
char nationalite[30];
char date[30];
};


typedef struct 
 {
char element[30];
int nbPlaceDispo;
int prix;
int num;
char sexe[20];
int nb;
} achat ;
typedef struct 
{
char user[50];
char password[50];
}cverif; 
 




int i,k;
int j;
void
on_Reserver_clicked                    (GtkButton       *button,
                                        gpointer         user_data);
void
on_AcceuilGestion_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_AjouterClient_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_ModifierClient_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_chercherClient_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_GestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data);


void
on_bmodifier_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bsupprimer_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bafficher12_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_Reserver_clicked                    (GtkButton       *button,
                                        gpointer         user_data);


void
on_button12_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonclientfidele_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonnombre_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonnombreclient_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_button12_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button13_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button14_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button15_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_bloginmed_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajoutermed_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_letsgo_clicked                      (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_inscription_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_Retourhama_clicked                  (GtkButton       *button,
                                        gpointer         user_data);
