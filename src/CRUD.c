#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "callbacks.h"
#include<string.h>
#include "CRUD.h"

//Ajouter un client 




/////////////////////////////
void ajouter_client( client c){
FILE*f=NULL; //flot de donnée
f=fopen("clients.txt","a+");// creation du fichier client .txt et ouverture en  mode lecture et ecriture a la fin
fprintf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date); //f variable de type file 
fclose(f); //retour NULL si operation fini 
}
//********************************************************





//verifier l'existance 

int exist_client(char*cin){
FILE*f=NULL;
 client c;
f=fopen("clients.txt","r");// ouverture du fichier client en  mode lecture 
while(fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF){
if(strcmp(c.cin,cin)==0)
return 1;   //cin existe deja 
}
fclose(f);
return 0;
}
int exist_clientnumtel(char*numtel){
FILE*f=NULL;
 client c;
f=fopen("clients.txt","r");// ouverture du fichier client en  mode lecture 
while(fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF){
if(strcmp(c.numtel,numtel)==0)
return 1;   //cin existe deja 
}
fclose(f);
return 0;
}

//*****************************************************************




//supprimer client 
void supprimer_client(char*cin){
FILE*f=NULL;
FILE*f1=NULL;
client c ;
f=fopen("clients.txt","r");
f1=fopen("ancien.txt","w+");//mode lecture et ecriture 
while(fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF){
if(strcmp(cin,c.cin)!=0)
fprintf(f1,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date);
}
fclose(f);
fclose(f1);
remove("clients.txt");
rename("ancien.txt","clients.txt");
}

//******************************************************************





//ajouter reservation 
void ajouter_reservation(achat e,int nb)//nb ==> valeur de spinButton
{
FILE*f=NULL;
achat r;
f=fopen("reservation.txt","a+"); //creation fichier reservation 
fprintf(f,"%s %d %d %d %s\n",e.element,nb,e.prix,e.num,e.sexe);
fclose(f);
}


//********************************************************************


//modifier reservation 
void modifier_achat(achat e,int nb){
FILE*f=NULL;
FILE*f1=NULL;
achat c ;
f=fopen("achat.txt","r");
f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %d %d\n",c.element,&c.nbPlaceDispo,&c.prix)!=EOF){
if(strcmp(e.element,c.element)!=0 || e.nbPlaceDispo!=c.nbPlaceDispo || e.prix!=c.prix  )
{
fprintf(f1,"%s %d %d\n",c.element,c.nbPlaceDispo,c.prix);
}
else
{
fprintf(f1,"%s %d %d\n",c.element,c.nbPlaceDispo-nb,c.prix);
}

}
fclose(f);
fclose(f1);
remove("achat.txt");
rename("ancien.txt","achat.txt");
}




int nombre(char nationalite[]) 
{
 FILE *f;
  client c; 
  int cl=0; 
  f=fopen("clients.txt","r"); 
if((f!=NULL))
 {
  while (fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF) 
	{
	 if(strcmp(c.nationalite,nationalite)==0)
	  { 
	  	cl++; 
	  } 
	} 
} 
fclose(f); 
return cl; 
}

int nombrec(char numtel[]) 
{
 FILE *f;
  client c; 
  int c1=0; 
  f=fopen("clients.txt","r"); 
if((f!=NULL))
 {
  while (fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.nationalite,c.date)!=EOF) 
	{
	 if(c.numtel!=0)
	  { 
	  	c1++; 
	  } 
	} 
} 
fclose(f); 
return c1; 
}

int nombreres(char element[])
{
 FILE *f;
 achat e; 
  int ra=0; 
  f=fopen("reservation.txt","r"); 
if((f!=NULL))
 {
  while (fscanf(f,"%s %d %d %d\n",e.element,&e.nbPlaceDispo,&e.prix,&e.num)!=EOF) 
	{
	 if(e.num!=0)
	  { 
	  	ra++; 
	  } 
	} 
} 
fclose(f); 
return ra; 

}




void modifier_client(char*cin,char*numtel,char*adresse,char*nationalite,char*date,char*nom,char*prenom){
FILE*f=NULL;
FILE*f1=NULL;
client c ;
f=fopen("clients.txt","r");

f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.date,c.nationalite)!=EOF){
if(strcmp(cin,c.cin)!=0)
	{
fprintf(f1,"%s %s %s %s %s %s %s\n",c.cin,c.nom,c.prenom,c.adresse,c.numtel,c.date,c.nationalite);
}else{
fprintf(f1,"%s %s %s %s %s %s %s \n",c.cin,nom,prenom,adresse,numtel,nationalite,date);
}
}
fclose(f);
fclose(f1);
remove("clients.txt");
rename("ancien.txt","clients.txt");
}



int calculer_max(int num){
int max=0;
int i=0;
achat e;
FILE*f=NULL;
f=fopen("reservation.txt","r");
if((f!=NULL))
 {
while(fscanf(f,"%s %d %d %d\n",e.element,&e.nbPlaceDispo,&e.prix,&e.num)!=EOF){
	 if((e.num,num)==0)
       {
            //max+=e.prix;
         max=e.num;
            //i++;
                      }
}
   //e.prix=max;
   }
fclose(f);
return max;
}

int verifier(cverif v)
{
FILE *f;
int role,a=1,b=1,c=-1 ; 
char user1[20] ; 
char password1[20] ; 
f=fopen("utilisateurad.txt","r"); 
if (f!=NULL)
{
while(fscanf(f,"%s %s %d",user1, password1,&role)!=EOF)
{
a=strcmp(v.user,user1);
   b=strcmp(v.password,password1);
if (a==0 && b==0)
     c =role;
}
}
fclose(f);
return c;
}
