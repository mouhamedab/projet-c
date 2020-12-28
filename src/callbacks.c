#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"tree.h"
#include"CRUD.h"
#include "personne.h"
GtkTreeSelection *selection1;





void
on_ajoutermed_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{



Personne p;

GtkWidget *input1, *input2,*input3,*input4,*input5,*output;
GtkWidget *fenetre_ajout;

fenetre_ajout=lookup_widget(objet,"fenetre_ajout");
output=lookup_widget(objet,"message2med");
input1=lookup_widget(objet,"usernamemed");
input2=lookup_widget(objet,"nommed");
input3=lookup_widget(objet,"prenommed");
input4=lookup_widget(objet,"passwordmed");
input5=lookup_widget(objet,"rolemed");


strcpy(p.username,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(p.nom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(p.prenom,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(p.password,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(p.role,gtk_entry_get_text(GTK_ENTRY(input5)));
		if(strcmp(p.password,"")==0 ||strcmp(p.username,"")==0||strcmp(p.nom,"")==0||strcmp(p.prenom,"")==0||strcmp(p.role,"")==0){
                gtk_label_set_text(GTK_LABEL(output),"veuillez remplir toutes les cases");
                }
        else if((strcmp(p.role,"1")!=0)&&(strcmp(p.role,"2")!=0)&&(strcmp(p.role,"3")!=0)){
                gtk_label_set_text(GTK_LABEL(output),"Ce role est invalide!");}
        else
        {
        ajouter_personne(p);
        gtk_label_set_text(GTK_LABEL(output),"succes");
        }




}




void
on_AcceuilGestion_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
/*preparation du treeView*/
GtkWidget *p; 
GtkWidget *p2;
i=0;
j=0;
k=0;
gtk_widget_hide (acceuil); //hide acceuil
gestion = create_gestion ();// ouvrir gestion
p=lookup_widget(gestion,"treeview2");//chercher treeview2 pour pointer
p2=lookup_widget(gestion,"treeview3");//chercher treeview3 pour pointer
gtk_widget_hide(lookup_widget(gestion,"label45"));// hide les commentaire
gtk_widget_hide(lookup_widget(gestion,"label44"));
gtk_widget_hide(lookup_widget(gestion,"label10m"));
AfficherClient(p,"clients.txt");//afficher client dans client.txt
Afficherachat(p2,"achat.txt");//affichet les achat dans achat.txt
gtk_widget_show (gestion);
}


void
on_AjouterClient_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
 client c;
GtkWidget *entryNom;
GtkWidget *entryCin;
GtkWidget *entryPrenom;
GtkWidget *entryAdresse;
GtkWidget *entryNumtel;
GtkWidget *entryNationalite;
GtkWidget *labelCin;
GtkWidget *labelnom;
GtkWidget *labelprenom;
GtkWidget *labeladresse;
GtkWidget *labelnumtel;
GtkWidget *labelnationalite;
GtkWidget *existe;
GtkWidget* success;
GtkWidget *cal;
int b=1;
int jj,mm,aa;
FILE*f=NULL;
entryCin=lookup_widget(gestion,"entry5");
entryNom=lookup_widget(gestion,"entry1");
entryPrenom=lookup_widget(gestion,"entry2");
entryAdresse=lookup_widget(gestion,"entry4");
entryNumtel=lookup_widget(gestion,"entry3");
entryNationalite=lookup_widget(gestion,"combobox1");
labelCin=lookup_widget(gestion,"label13");
labelnom=lookup_widget(gestion,"label7");
labelprenom=lookup_widget(gestion,"label8");
labeladresse=lookup_widget(gestion,"label9");
labelnumtel=lookup_widget(gestion,"label10");
labelnationalite=lookup_widget(gestion,"nat6");
existe=lookup_widget(gestion,"label34");
success=lookup_widget(gestion,"label35");
cal=lookup_widget(gestion,"calendar1");
        strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(entryCin) ) );
        strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(entryNom) ) );
        strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(entryPrenom) ) );
        strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(entryAdresse) ) );
        strcpy(c.numtel,gtk_entry_get_text(GTK_ENTRY(entryNumtel) ) );
        strcpy(c.nationalite,gtk_combo_box_get_active_text(GTK_COMBO_BOX(entryNationalite)));
   gtk_calendar_get_date (GTK_CALENDAR(cal),
                       &aa,
                       &mm,
                       &jj);
 gtk_widget_hide (success);


// controle saisie 
if(strcmp(c.cin,"")==0){
		  gtk_widget_show (labelCin);
b=0;
}
else {
		  gtk_widget_hide(labelCin);
}

if(strcmp(c.nom,"")==0){
		  gtk_widget_show (labelnom);
b=0;
}
else {
		  gtk_widget_hide(labelnom);
}
if(strcmp(c.prenom,"")==0){
		  gtk_widget_show (labelprenom);
b=0;
}
else {
		  gtk_widget_hide(labelprenom);
}
if(strcmp(c.adresse,"")==0){
		  gtk_widget_show (labeladresse);
b=0;
}
else {
		  gtk_widget_hide(labeladresse);
}
if(strcmp(c.numtel,"")==0){
		  gtk_widget_show (labelnumtel);
b=0;
}
else {
		  gtk_widget_hide(labelnumtel);
}



if(b==1){


        if(exist_client(c.cin)==1)
        {

				  gtk_widget_show (existe);
        }
        

else{
           gtk_widget_hide (existe);

f=fopen("clients.txt","a+");
fprintf(f,"%s %s %s %s %s %s %d/%d/%d\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,jj,mm+1,aa);
fclose(f);
        //ajouter_client(c);

                  gtk_widget_show (success);


//mise a jour du treeView
        GtkWidget* p=lookup_widget(gestion,"treeview2");

        AfficherClient(p,"clients.txt");
}

}
}


void
on_ModifierClient_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
char cin[30];
char nom[30];
char prenom[30];
char adresse[30];
char numtel[30];
char nationalite[30];
char date[30];


int b=1;
     GtkWidget *combobox2;
     combobox2=lookup_widget(button,"combobox2");
    	 client c;
        strcpy(c.cin,gtk_label_get_text(GTK_LABEL(lookup_widget(gestion,"label20"))));
        strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry6"))));
        strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry7"))));
        strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry9"))));
        strcpy(c.numtel,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry8"))));
        strcpy(c.nationalite,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(gestion,"combobox2"))));
        strcpy(c.date,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entrydate"))));
        
       modifier_client(c.cin,c.numtel,c.adresse,c.nationalite,c.date,c.nom,c.prenom);
       //supprimer_client(c.cin);
       //ajouter_client(c);

//mise ajour du tree view 
        AfficherClient(lookup_widget(gestion,"treeview2"),"clients.txt");
      gtk_widget_show(lookup_widget(gestion,"label37"));

       GtkWidget *p=lookup_widget(gestion,"treeview2");
        AfficherClient(p,"clients.txt");
}
void
on_chercherClient_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *p1;
GtkWidget *entry;
GtkWidget *labelcin;
GtkWidget *nbResultat;
GtkWidget *message;
char cin[30];
char chnb[30];
int b=0,nb; //b=0  entry  cherche vide 
entry=lookup_widget(gestion,"entry10");
labelcin=lookup_widget(gestion,"label28");
p1=lookup_widget(gestion,"treeview2");
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(entry)));

if(strcmp(cin,"")==0){
  gtk_widget_show (labelcin);b=0;
}else{
b=1;
gtk_widget_hide (labelcin);}

if(b==0){return;}else{

nb=ChercherClient(p1,"clients.txt",cin);
/* afficher le nombre de resultats obtenue par la recherche */
sprintf(chnb,"%d",nb);//conversion int==> chaine car la fonction gtk_label_set_text naccepte que chaine
nbResultat=lookup_widget(gestion,"label27");
message=lookup_widget(gestion,"label26");
gtk_label_set_text(GTK_LABEL(nbResultat),chnb);

gtk_widget_show (nbResultat);
gtk_widget_show (message);



}

}


void
on_GestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_widget_show (acceuil);
gtk_widget_destroy (gestion);

}




void
on_bmodifier_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
        gchar *cin;
        gchar *nom;
        gchar *prenom;
        gchar *adresse;
        gchar *numtel;
        gchar *nationalite;
        gchar *date;
     
        GtkTreeModel     *model;
        GtkTreeIter iter;
        if (gtk_tree_selection_get_selected(selection1, &model, &iter))
        {

        gtk_widget_hide(lookup_widget(gestion,"label37"));//cacher label modifier avec succees
                gtk_tree_model_get (model,&iter,0,&cin,1,&nom,2,&prenom,3,&adresse,4,&numtel,5,&nationalite,6,&date,-1);//recuperer les information de la ligne selectionneé
        // //remplir les champs de entry
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry6")),nom);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry7")),prenom);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry9")),adresse);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry8")),numtel);
                 gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"combobox2")),nationalite);
                 gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entrydate")),date);


                GtkWidget* msgCin=lookup_widget(gestion,"label20");
                GtkWidget* msg1=lookup_widget(gestion,"label36");
                gtk_label_set_text(GTK_LABEL(msgCin),cin);
                gtk_widget_show(msgCin);
                gtk_widget_show(msg1);
                gtk_widget_show(lookup_widget(gestion,"button4"));//afficher le bouton modifier
                gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(gestion,"notebook1")));//redirection vers la page precedente
       int x;

                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entrydate")),date);
        

            
                if(strcmp(nationalite,"Tunisien")==0) x=0;
                if(strcmp(nationalite,"Etrangee ")==0) x=1;




                gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(gestion,"combobox2")),x);
            
           
     
}
   
        }




void
on_bsupprimer_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
    gchar *cin;
    gchar *nom;
    gchar *prenom;
    gchar *adresse;
    gchar *numtel;
     gchar *nationalite;
        gchar *date;
    GtkTreeModel     *model;
    GtkTreeIter iter;
       if (gtk_tree_selection_get_selected(selection1, &model, &iter))
        {
            gtk_tree_model_get (model,&iter,0,&cin,1,&nom,2,&prenom,3,&adresse,4,&numtel,5,nationalite,6,date,-1);//recuperer les information de la ligne selectionneé
            supprimer_client(cin);
            AfficherClient(lookup_widget(gestion,"treeview2"),"clients.txt");        
        }
}


void
on_bafficher12_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
        GtkWidget *p=lookup_widget(gestion,"treeview2");
        AfficherClient(p,"clients.txt");
}


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)//signale du treeView (Double click)
{
    gchar *cin;
        gchar *nom;
        gchar *prenom;
        gchar *adresse;
        gchar *numtel;
         gchar *nationalite;
        gchar *date;
            int x;
        GtkTreeModel     *model;
        GtkTreeIter iter;

        GtkWidget *p=lookup_widget(gestion,"treeview2");
        selection1 = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
       

 

}
void
on_buttonnombreclient_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
int cl;
 char message1[120]="";
  char nationalite[30];
 GtkWidget *output;
 GtkWidget *combobox;

   //GtkWidget *gestion; 
  //gestion=lookup_widget(button,"gestion");
    combobox=lookup_widget(button,"comboboxn");
    output=lookup_widget(button,"nbc");
    strcpy(nationalite,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)));
    cl=nombre(nationalite); 
     sprintf(message1,"il ya  %d client(s) de cette nationalité",cl);
    gtk_label_set_text(output,message1);
}


void
on_Reserver_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *labelSelection;
        GtkWidget *labelInvalid;
        GtkWidget *labelsuccess;
        GtkWidget *entrynum;
        GtkWidget *labelnum;
        GtkWidget *labelerr;
     
    FILE*f=NULL;
entrynum=lookup_widget(gestion,"entry3m");
labelnum=lookup_widget(gestion,"label3m");
labelerr=lookup_widget(gestion,"label10m");
        gint *nbPlaceDispo,*prix,*nbE;
        gchar *element;
    achat r;

        labelSelection=lookup_widget(gestion,"label43");
        labelInvalid=lookup_widget(gestion,"label44");
        labelsuccess=lookup_widget(gestion,"label45");
        p=lookup_widget(gestion,"treeview3");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
          
         
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  
                gtk_tree_model_get (model,&iter,0,&element,1,&nbPlaceDispo,2,&prix,-1);//recuperer les information de la ligne selectionneé
 
        //remplissage du structure client





        strcpy(r.element,element);
        r.prix=prix;
        r.nbPlaceDispo=nbPlaceDispo;
        nbE =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(gestion,"spinbutton1")));
   
 // controle saisie 
        char NUM[30];
        GtkWidget *radiobutt1;
        GtkWidget *radiobutt2;
radiobutt1=lookup_widget(gestion,"radiobutton1h");
radiobutt2=lookup_widget(gestion,"radiobutton2h");
 strcpy(NUM,gtk_entry_get_text(GTK_ENTRY(entrynum)));
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON(radiobutt2) )){
strcpy(r.sexe,"male");
}
 if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON(radiobutt1) )){
strcpy(r.sexe,"femelle");
}

if((strcmp(NUM,"")==0)||(!exist_clientnumtel(NUM)))
{
          gtk_widget_show (labelerr);
          //gtk_label_set_text(GTK_LABEL(labelerr),"SAISIR NUMERO DE TELEPHONE DU CLIENT ");
}
else {
          gtk_widget_hide(labelerr);


        if(r.nbPlaceDispo<nbE){

        gtk_widget_show (labelInvalid);

        }else
        {
        gtk_widget_hide(labelInvalid);

 sscanf(NUM,"%d",&r.num);

 }
        ajouter_reservation(r,nbE);
        modifier_achat(r,nbE);

        gtk_widget_show (labelsuccess);

        //mise a jour du treeView
        Afficherachat(lookup_widget(gestion,"treeview3"),"achat.txt");

        gtk_widget_hide (labelSelection); 
    }
}
   
    else{

                gtk_widget_show (labelSelection);
        }

}

void
on_button12_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
int c1;
 char message2[120]="";
  char numtel[30];
 GtkWidget *output;

   //GtkWidget *gestion; 
  //gestion=lookup_widget(button,"gestion");
    output=lookup_widget(button,"nbc1");
    c1=nombrec(numtel); 
     sprintf(message2,"Le nombre total des clients est %d  ",c1);
    gtk_label_set_text(output,message2);
}


void
on_button13_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
int ra;
 char message3[120]="";
  char element[30];
 GtkWidget *output;

   //GtkWidget *gestion; 
  //gestion=lookup_widget(button,"gestion");
    output=lookup_widget(button,"messager");
    ra=nombreres(element); 
     sprintf(message3,"%d troupeaux ont été réservés ",ra);
    gtk_label_set_text(output,message3);
}



void
on_button14_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
    int num;
    int max;
 char message4[120]="";
 GtkWidget *output;
    output=lookup_widget(button,"fidele");
    max=calculer_max(num);
     sprintf(message4,"le numéro de  la client  fidele est %d  ",max);
    gtk_label_set_text(output,message4);
}

void
on_bloginmed_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *fenetre_ajout, *login;

fenetre_ajout=lookup_widget(button,"fenetre_ajout");


gtk_widget_destroy(fenetre_ajout);
login=create_login();
gtk_widget_show(login);

}




void
on_letsgo_clicked                      (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
/*GtkWidget *acceuil, *login;

login=lookup_widget(button,"login");


gtk_widget_destroy(login);
acceuil=create_acceuil();
gtk_widget_show(acceuil);*/


FILE *f;
int role;
int c ; 
cverif v ; 

GtkWidget *acceuil ,*login; 

GtkWidget *input,*input1,*output; 

input=lookup_widget(objet_graphique,"usernameab");
input1=lookup_widget(objet_graphique,"passwordab");
login=lookup_widget(objet_graphique,"login");

strcpy(v.user,gtk_entry_get_text(GTK_ENTRY(input)));
strcpy(v.password,gtk_entry_get_text(GTK_ENTRY(input1)));
output=lookup_widget(objet_graphique,"labelwrong");
c=verifier(v);

if (c==1)
{acceuil=create_acceuil();
gtk_widget_show(acceuil);
gtk_widget_hide(login);
}

/*else if (c==2)
{Employe=create_ModeEmploye();
gtk_widget_show(Employe);
gtk_widget_hide(Home);
}

else if (c==3)
{Client=create_ModeClient();
gtk_widget_show(Client);
gtk_widget_hide(Home);
}*/
else 
{
gtk_label_set_text(GTK_LABEL(output)," Unable to Connect ! ");
}
/*GtkWidget *Home ,*Visiteur ;

Home=lookup_widget(objet_graphique,"Home");
Visiteur=create_ModeVisiteur(); 
gtk_widget_show(Visiteur);
gtk_widget_hide(Home);*/
}
void
on_inscription_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *fenetre_ajout, *login;

login=lookup_widget(button,"login");


gtk_widget_destroy(login);
fenetre_ajout=create_fenetre_ajout();
gtk_widget_show(fenetre_ajout);
}


void
on_Retourhama_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *acceuil, *login;

acceuil=lookup_widget(button,"acceuil");


gtk_widget_destroy(acceuil);
login=create_login();
gtk_widget_show(login);
}

