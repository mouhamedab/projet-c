#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include <gtk/gtk.h>
#include "interface.h"
#include "callbacks.h"
#include "tree.h"
GtkListStore *adstore;/*creation du modele de type liste*/
GtkTreeViewColumn *adcolumn;/*visualisation des colonnes*/
GtkCellRenderer *cellad;/*afficheur de cellule(text,image..)*/
FILE *f;
void AfficherClient(GtkWidget* treeview1,char*l){
client c;
        /* Creation du modele */
        adstore = gtk_list_store_new(7,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF)
        {GtkTreeIter pIter;

         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,c.cin,
                            1,c.nom,
                            2,c.prenom,
                            3,c.adresse,
                            4,c.numtel,
                            5,c.nationalite,
                            6,c.date,
                          -1);}
        fclose(f);

	/* Creation de la 1ere colonne */
        if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("CIN",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


	/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NOM",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
	/* Ajouter la 2emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("PRENOM",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
	/* Ajouter la 3emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("ADERESSE",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
	/* Ajouter la 4emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NUMTEL",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
	/* Ajouter la 5emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 6emecolonne */

  cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NATIONALITE",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 6emecolonne */

  cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("DATE",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
   }
i++;

 	gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );

}



int ChercherClient(GtkWidget* treeview1,char*l,char*cin)
{

client c;
int nb=0;

        /* Creation du modele */
        adstore = gtk_list_store_new(7,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF)
        {
	if( strcmp(cin,c.cin)==0)
    { 
      nb++;
	GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,c.cin,
                            1,c.nom,
                            2,c.prenom,
                            3,c.adresse,
                            4,c.numtel,
                            5,c.nationalite,
                            6,c.date,
                            -1);}
}
        fclose(f);

	/* Creation de la 1ere colonne */

if(j==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("CIN",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


	/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NOM",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
	/* Ajouter la 2emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("PRENOM",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
	/* Ajouter la 3emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("ADERESSE",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
	/* Ajouter la 4emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NUMTEL",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
	/* Ajouter la 5emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 1ere colonne */


  cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NATIONALITE",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 1ere colonne */

  cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("DATE",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
        /* Ajouter la 1er colonne à la vue */
  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);	
j++;
}

 	gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
return nb;
}




void Afficherachat(GtkWidget* treeview1,char*l)
{

achat e;


        /* Creation du modele */
        adstore = gtk_list_store_new(3,  
                                     G_TYPE_STRING,
                                     G_TYPE_INT,
                                     G_TYPE_INT);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %d %d\n",e.element,&e.nbPlaceDispo,&e.prix)!=EOF)
        {GtkTreeIter pIter;
  
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,e.element,
                            1,e.nbPlaceDispo,
                            2,e.prix,
                            -1);}
        fclose(f);


  
 
  /* Creation de la 2eme colonne */
        if (k==0){
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("ELEMENT",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);
  /* Ajouter la 2emme colonne à la vue */

  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

  /* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("NB PLACE DISPO",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
  /* Ajouter la 3emme colonne à la vue */
  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

  /* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("PRIX",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
  /* Ajouter la 5emme colonne à la vue */
  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);



k++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );

}
//*********************************************************







