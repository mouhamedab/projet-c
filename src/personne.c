#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <string.h>
#include "personne.h"
#include <gtk/gtk.h>


//Ajouter une personne

void ajouter_personne(Personne p)
{

 FILE *f;
  f=fopen("utilisateurad.txt","a+");//ouvrir fichier chemain" utilisateur" lire et ecrire 
  if(f!=NULL) 
  {
  fprintf(f,"%s %s %s %s %s \n",p.username,p.password,p.prenom,p.nom,p.role);//ecrir dans un fichier texte 
  fclose(f);//annuler la laison entre utilisateur et le flot de donnee

}

}



int verif(char logiin[],char pw[])
{
int trouve=-1;
FILE *f=NULL;
char ch1[20];
char ch2[30];

f=fopen("utilisateurad.txt","r");
if(f!=NULL)
{
while(fscanf(f,"%s %s",ch1,ch2)!=EOF)
{
if((strcmp(ch1,logiin)==0)&&(strcmp(ch2,pw)==0))
trouve=1;

}
fclose(f);
}
return (trouve);
}



