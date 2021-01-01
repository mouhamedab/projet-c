#include <gtk/gtk.h>
  GtkWidget *acceuilw;
  GtkWidget *gestionw;
typedef struct troupeaux troupeaux ;
struct troupeaux{
char id[30];
char sexe[30];
char type[30];
char date[30];
char prix[9];
};



void
on_AcceuilGestionw_clicked              (GtkButton       *button,
                                        gpointer         user_data);


void
on_GestionAcceuilw_clicked              (GtkButton       *button,
                                        gpointer         user_data);


void
on_bmodifier_clickedw                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bsupprimer_clickedw                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bafficher12w_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview2w_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_cherchertroupeaux_clicked          (GtkButton       *button,
                                        gpointer         user_data);



void
on_Ajoutertroupeaux_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modifiertroupeaux_clicked           (GtkButton       *button,
                                        gpointer         user_data);



void
on_button_calcule_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_validersomme_clicked                (GtkButton       *button,
                                        gpointer         user_data);


void
on_GestionAcceuilw_clicked             (GtkButton       *button,
                                        gpointer         user_data);





