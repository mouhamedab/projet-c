#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"tree.h"
#include"CRUD.h"
GtkTreeSelection *selection1;

void
on_AcceuilGestionw_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
/*preparation du treeView*/
GtkWidget *p;
gtk_widget_hide (acceuilw);
gestionw = create_gestionw ();
p=lookup_widget(gestionw,"treeview2w");
Affichertroupeaux(p,"troupeaux.txt");
gtk_widget_show (gestionw);
}


void
on_Ajoutertroupeaux_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
 troupeaux t;
GtkWidget *entrysexew;
GtkWidget *entryIdw;
GtkWidget *entrytypew;
//GtkWidget *entryDatew;
GtkWidget *entryPrixw;
GtkWidget *labelIdw;
GtkWidget *labelsexew;
GtkWidget *labelTypew;
GtkWidget *labelDatew;
GtkWidget *labelPrixw;
GtkWidget *existew;
GtkWidget* successw;
GtkWidget *calw;
int b=1;
int jj1,mm1,aa1;

FILE*f=NULL;


entryIdw=lookup_widget(gestionw,"entry5w");
entrysexew=lookup_widget(gestionw,"combobox1w");
entrytypew=lookup_widget(gestionw,"combobox2w");

entryPrixw=lookup_widget(gestionw,"entry3w");

labelIdw=lookup_widget(gestionw,"label13w");
labelsexew=lookup_widget(gestionw,"label7w");
labelTypew=lookup_widget(gestionw,"label8w");

labelPrixw=lookup_widget(gestionw,"label10w");
existew=lookup_widget(gestionw,"label34w");
successw=lookup_widget(gestionw,"label35w");
calw=lookup_widget(gestionw,"yawmia");
        strcpy(t.id,gtk_entry_get_text(GTK_ENTRY(entryIdw) ) );
        strcpy(t.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(entrysexew)));
        strcpy(t.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(entrytypew)));

        strcpy(t.prix,gtk_entry_get_text(GTK_ENTRY(entryPrixw) ) );

 gtk_widget_hide (successw);

 gtk_calendar_get_date (GTK_CALENDAR(calw),
                       &aa1,
                       &mm1,
                       &jj1);
 gtk_widget_hide (successw);


// controle saisie
if(strcmp(t.id,"")==0){
		  gtk_widget_show (labelIdw);
b=0;
}
else {
		  gtk_widget_hide(labelIdw);
}

if(strcmp(t.sexe,"")==0){
		  gtk_widget_show (labelsexew);
b=0;
}
else {
		  gtk_widget_hide(labelsexew);
}
if(strcmp(t.type,"")==0){
		  gtk_widget_show (labelTypew);
b=0;
}
else {
		  gtk_widget_hide(labelTypew);
}

if(strcmp(t.prix,"")==0){
		  gtk_widget_show (labelPrixw);
b=0;
}
else {
		  gtk_widget_hide(labelPrixw);
}



if(b==1){

        if(exist_troupeaux(t.id)==1)
        {

				  gtk_widget_show (existew);
                }
                else {
                     gtk_widget_hide (existew);

       f=fopen("troupeaux.txt","a+");
fprintf(f,"%s %s %s %s %d/%d/%d %s\n",t.id,t.sexe,t.type,t.date,jj1,mm1+1,aa1,t.prix);
fclose(f);
     
//ajouter_troupeaux(t);
                  gtk_widget_show (successw);


//mise a jour du treeView
        GtkWidget* p=lookup_widget(gestionw,"treeview2w");

        Affichertroupeaux(p,"troupeaux.txt");
}

}
}



void
on_Modifiertroupeaux_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
      GtkWidget *combobox3w;
        GtkWidget *combobox4w;
     combobox3w=lookup_widget(button,"combobox3w");
     combobox4w=lookup_widget(button,"combobox4w");
       	 troupeaux t;

        strcpy(t.id,gtk_label_get_text(GTK_LABEL(lookup_widget(gestionw,"label20w"))));
        
   strcpy(t.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(gestionw,"combobox3w"))));
   strcpy(t.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(gestionw,"combobox4w"))));
        strcpy(t.prix,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestionw,"entry8w"))));
        strcpy(t.date,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestionw,"entry9w"))));
        supprimer_troupeaux(t.id);
        ajouter_troupeaux(t);
//mise ajour du tree view 
        Affichertroupeaux(lookup_widget(gestionw,"treeview1w"),"troupeaux.txt");
	gtk_widget_show(lookup_widget(gestionw,"label37w"));
        GtkWidget *p=lookup_widget(gestionw,"treeview2w");
        Affichertroupeaux(p,"troupeaux.txt");
}





void
on_cherchertroupeaux_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *p1w;
GtkWidget *entryw;
GtkWidget *labelidw;
GtkWidget *nbResultatw;
GtkWidget *messagew;
char id[30];
char chnb[30];
int b=0,nb; //b=0  entry  cherche vide 
entryw=lookup_widget(gestionw,"entry10w");
labelidw=lookup_widget(gestionw,"label28w");
p1w=lookup_widget(gestionw,"treeview2w");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(entryw)));

if(strcmp(id,"")==0){
  gtk_widget_show (labelidw);b=0;
}else{
b=1;
gtk_widget_hide (labelidw);}

if(b==0)
    {return;
    }
    else
    {

nb=Cherchertroupeaux(p1w,"troupeaux.txt",id);
// afficher le sexebre de resultats obtenue par la recherche
 

sprintf(chnb,"%d",nb);        //conversion int==> chaine car la fonction gtk_label_set_text naccepte que chaine
nbResultatw=lookup_widget(gestionw,"label27");
messagew=lookup_widget(gestionw,"label26w");
gtk_label_set_text(GTK_LABEL(nbResultatw),chnb);

gtk_widget_show (nbResultatw);
gtk_widget_show (messagew);
}
}


void
on_GestionAcceuilw_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_widget_show (acceuilw);
gtk_widget_destroy (gestionw);

}




void
on_bmodifier_clickedw                   (GtkButton       *button,
                                        gpointer         user_data)
{
        gchar *id;
        gchar *sexe;
        gchar *type;
        gchar *date;
        gchar *prix;
  
        GtkTreeModel     *model;
        GtkTreeIter iter;
        if (gtk_tree_selection_get_selected(selection1, &model, &iter))
        {

        gtk_widget_hide(lookup_widget(gestionw,"label37w"));//cacher label modifier avec succees
                gtk_tree_model_get (model,&iter,0,&id,1,&sexe,2,&type,3,&date,4,&prix,-1);//recuperer les information de la ligne selectionneé
        // //remplir les champs de entry
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestionw,"combobox3w")),sexe);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestionw,"combobox4w")),type);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestionw,"entry9w")),date);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestionw,"entry8w")),prix);



                GtkWidget* msgId=lookup_widget(gestionw,"label20w");
                GtkWidget* msg1=lookup_widget(gestionw,"label36w");
                gtk_label_set_text(GTK_LABEL(msgId),id);
                gtk_widget_show(msgId);
                gtk_widget_show(msg1);
                gtk_widget_show(lookup_widget(gestionw,"button4w"));//afficher le bouton modifier
                gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(gestionw,"notebook1w")));//redirection vers la page precedente
        gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestionw,"entry9w")),date);
        }

}


void
on_bsupprimer_clickedw                  (GtkButton       *button,
                                        gpointer         user_data)
{
    gchar *Id;
    gchar *sexe;
    gchar *Type;
    gchar *date;
    gchar *prix;
  
    GtkTreeModel     *model;
    GtkTreeIter iter;
       if (gtk_tree_selection_get_selected(selection1, &model, &iter))
        {
            gtk_tree_model_get (model,&iter,0,&Id,1,&sexe,2,&Type,3,&date,4,&prix,-1);//recuperer les information de la ligne selectionneé
            supprimer_troupeaux(Id);
            Affichertroupeaux(lookup_widget(gestionw,"treeview2w"),"troupeaux.txt");        
        }
}


void
on_bafficher12w_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
        GtkWidget *p=lookup_widget(gestionw,"treeview2w");
        Affichertroupeaux(p,"troupeaux.txt");
}


void
on_treeview2w_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)//signale du treeView (Double click)
{
    	gchar *id;
        gchar *sexe;
        gchar *type;
        gchar *date;
        gchar *prix;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget *p=lookup_widget(gestionw,"treeview2w");
        selection1 = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
       
}


void
on_validersomme_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
int nbr;
 char msg[120]="";
  char type[30];
 GtkWidget *output;
 GtkWidget *combobox;
   //GtkWidget *gestion; 
  //gestion=lookup_widget(button,"gestion");

combobox=lookup_widget(button,"comboboxchoix");
    output=lookup_widget(button,"labelnombre");
    strcpy(type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)));
     nbr=Somme(type); sprintf(msg,"La nombre de type que vous avez choisir vaut %d",nbr); gtk_label_set_text(output,msg);
}















