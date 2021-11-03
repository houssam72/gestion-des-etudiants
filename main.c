#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


  // fonction gestion d eatat ==== houssam
void menu_gestion_etat();
void cadre_table();
void remplissez_table_pret();
void houssam();
void test();
void hh(int b);
int *p;
//fonction de ovrage

void menuouvrage(void);
void menuconsulterouvrage(void);
void nouveauouvrage(void);
void consulterouvrage(void);
void modifierouvrage(int);
void supprimerouvrage(int);
void ouvrage(void);
void sleep(int);



typedef struct{
        int num;
        char titre[20];
        int annee;
        char auteur[20];
        char specialite[20];
        int alpha;/* SE VA RIABLE M AIDE PARTIE ==== HOUSSAM ======*/}ouvre;
/* x = le variable qui consulte les données de l'ouvrage */

ouvre x[500];

/* choix = le choix de l'utilisateur */
/* i = le nombre d'ouvrage existe */

    int choix;
    int i=0;



//fonction de etudiant
int recherche(int ad);
void menu();
void ajouter();
void afficher();
void pricipale();
void menu1();
void afficherdecherch();
void mod();
void suppre();
typedef struct{
            int numero;
            char prenome[30];
            char filiere[30];
            char nome[30];
            int tele;
            int annee_inscrit;
    }etudiants;
etudiants stdnt[500];
int e=1;

// fonction du gestion du pret
void menu_pret(void);
void menu_consulter_pret(void);
void nouveau_pret(void);
void consulter_pret(void);
void modifier_pret(int n);
void supprimer_pret(int m);
void khadija(void);

typedef struct{
  int num;
  int debut1;
  int debut2;
  int debut3;
  int retour1;
  int retour2;
  int retour3;
  int duree1;
  int duree2;
  int duree3;
}pret;
pret y[100];

int r=0;int choice;


void main()
{

      pricipale();

}



void pricipale()
{
    int n,i,choix,chmp,valeuremod1,a;
    char choix1,r,valeuremod2[10];


    menu();
    printf("\n\nDONNER VOTRE CHOIX : ");
    a=getch();
    switch(a){

        case 49:
        clrscr();
        menu1();
       break;
        case 50 :
        clrscr();
        ouvrage();
   break;
        case 51:
          clrscr();
          khadija();
        case 52:
      clrscr();
      houssam();
      break;
    }
}


void menu1()
{
      int AB,ad,et,sup;
      int md,chmod;
      int k,ax=-1,ab;
      MOUAD:
       system("cls");
       if (e==500){printf("le table est plein !!!!");}
       else{
       textcolor(2);textbackground(7);
       gotoxy(25,4);cprintf("                                                             ");
       gotoxy(25,5);cprintf("                    GESTION DES ETUDIANTS                    ");
       gotoxy(25,6);cprintf("_____________________________________________________________");
       gotoxy(25,7);cprintf("                                                             ");
       gotoxy(25,8);cprintf("1-ajouter etudiant                                           ");
       gotoxy(25,9);cprintf("                                                             ");
       gotoxy(25,10);cprintf("2-afficher tout les etudiants                                ");
       gotoxy(25,11);cprintf("                                                             ");
       gotoxy(25,12);cprintf("3-chercher etudiant                                          ");
       gotoxy(25,13);cprintf("                                                             ");
       gotoxy(25,14);cprintf("4-modifier etudiant                                          ");
       gotoxy(25,15);cprintf("                                                             ");
       gotoxy(25,16);cprintf("5-suprimer etudiant                                          ");
       gotoxy(25,17);cprintf("                                                             ");
       gotoxy(25,18);cprintf("9-menu pricipalle                                            ");
       gotoxy(25,19);cprintf("                                                             ");

       printf("\n\nDONNER VOTRE CHOIX : ");
    ab=getch();
    switch(ab)

    {

        case 49:
        clrscr();
        ajouter();
        printf("\n\n");
        getch();
        menu1();
        break;

        case 50:
        clrscr();
        afficher();
        break;

        case 51 :
        clrscr();

        textcolor(BLACK);gotoxy(5,2);cprintf("                                       ");
        gotoxy(5,3);cprintf("    doner le id de votre utilisatre    ");
        gotoxy(5,4);cprintf("                                       ");
        gotoxy(6,7);cprintf("--->>>......................");gotoxy(15,7);scanf("%d",&ad);
        AB=recherche(ad);
        if (AB==-1)
        {
            clrscr();
            textcolor(BLACK);textbackground(RED);
            gotoxy(5,2);cprintf("                                                            ");
            gotoxy(5,3);cprintf("      l'etudiant ne peut pas trouvee dans la list ::::      ");
            gotoxy(5,4);cprintf("                                                            ");
            textcolor(BLACK);textbackground(GREEN);
            gotoxy(10,9);cprintf("                               ");
            gotoxy(10,10);cprintf("     Tape key to go a menu     ");
            gotoxy(10,11);cprintf("                               ");
            getch();
            goto MOUAD;
        }else
        {
            clrscr();
            afficherdecherch(AB);
        }

        break;
        case 52 :
        clrscr();
        printf("doner le id de votre etudiant qui vous vollez modifier   ");
        scanf("%d",&ad);
        clrscr();
        AB=recherche(ad);
        if (AB==-1)
        {
            printf("l'etudiant ne peut pas trouvee dans la list ::::\n\n");
            printf("Tape key to go a menu ");
            getch();
            goto MOUAD;
        }else
        {
            mod(AB);
        }

        break;

        case 53 :
         clrscr();
        gotoxy(10,10);printf("donner le numero d'etudiant qui vous vollez supremme       ");
        scanf("%d",&sup);
        AB=recherche(sup);
        if (AB==-1)
        {
            clrscr();
            printf("l'etudiant ne peut pas trouvee dans la list ::::\n\n");
            printf("Tape key to go a menu ");
            getch();
            goto MOUAD;
        }else
        {
         clrscr();
        suppre(AB);
        }
        break;

        case 57 :
        clrscr();
        pricipale();
        break;
    }

    }
}



void ajouter()
{
       system("cls");
       if (e==500){printf("le table est plein !!!!");}
       else{
       textcolor(2);textbackground(7);
       gotoxy(25,4);    cprintf("                                                                ");
       gotoxy(25,5);    cprintf("                      GESTION DES ETUDIANTS                     ");
       gotoxy(25,6);    cprintf("________________________________________________________________");
       gotoxy(25,8);    cprintf("                                                                ");
       gotoxy(25,9);    cprintf("Numero De l'Etudiant :......%d...................................",e);
       gotoxy(25,10);   cprintf("                                                                ");
       gotoxy(25,11);   cprintf("Nom                  :..........................................");
       gotoxy(25,12);   cprintf("                                                                ");
       gotoxy(25,13);   cprintf("prenom               :..........................................");
       gotoxy(25,14);   cprintf("                                                                ");
       gotoxy(25,15);   cprintf("Filiere              :..........................................");
       gotoxy(25,16);   cprintf("                                                                ");
       gotoxy(25,17);   cprintf("Tele               :............................................");
       gotoxy(25,18);   cprintf("                                                                ");
       gotoxy(25,19);   cprintf("Annee_inscrit        :..........................................");
       gotoxy(25,20);   cprintf("                                                                ");

       gotoxy(50,11);scanf("%s",&stdnt[e].nome);
       gotoxy(50,13);scanf("%s",&stdnt[e].prenome);
       gotoxy(53,15);scanf("%s",&stdnt[e].filiere);
       gotoxy(50,17);scanf("%d",&stdnt[e].tele);
       gotoxy(53,19);scanf("%d",&stdnt[e].annee_inscrit);
       stdnt[e].numero=e;
       e++;
       }
}

void menu()
{
    PRCINIPAL:
  system("color F8");


            textcolor(14);textbackground(1);
            gotoxy(30,5);cprintf("                                                                  ");
            gotoxy(30,6);cprintf("               GESTION DE BIBLIOTHEQUE UNIVERSITAIR               ");
            gotoxy(30,7);cprintf("                                                                  ");
            gotoxy(30,8);printf("                                                                  ");

            textcolor(6);textbackground(1);
            gotoxy(30,9);cprintf("                                                                  ");
            gotoxy(30,10);cprintf("1              GESTION DES ETUDIANTS                              ");
            gotoxy(30,11);cprintf("                                                                  ");
            gotoxy(30,12);cprintf("2             GESTION  DES OUVRAGES                               ");
            gotoxy(30,13);cprintf("                                                                  ");
            gotoxy(30,14);cprintf("3             GESTION DES PRETS                                   ");
            gotoxy(30,15);cprintf("                                                                  ");
            gotoxy(30,16);cprintf("4             GENERATION D’ETATS                                  ");
            gotoxy(30,17);cprintf("                                                                  ");
            gotoxy(30,18);cprintf("5             QUITTER                                             ");
            gotoxy(30,19);cprintf("                                                                  ");

}

void afficher()
{
    int j=1;
    char action;
    menu:

    textcolor(2);textbackground(WHITE);gotoxy(40,2); cprintf("                                        ");
    gotoxy(40,3); cprintf("                                        ");
    gotoxy(40,4); cprintf("****les donner de l'etudiant num %d****  ",j);
    gotoxy(40,5); cprintf("                                        ");
    gotoxy(40,6); cprintf("                                        ");
    textcolor(BLACK);textbackground(GREEN);
    gotoxy(25,8);    cprintf("                                                                ");
    gotoxy(25,9);    cprintf("                      GESTION DES ETUDIANTS                     ");
    gotoxy(25,10);    cprintf("________________________________________________________________");
        textcolor(BLACK);textbackground(7);
        gotoxy(25,11);    cprintf("                                                                ");
        gotoxy(25,12);    cprintf("Numero De l'Etudiant :..........................................");
        gotoxy(25,13);    cprintf("                                                                ");
        gotoxy(25,14);    cprintf("Nom                  :..........................................");
        gotoxy(25,15);    cprintf("                                                                ");
        gotoxy(25,16);    cprintf("prenom               :..........................................");
        gotoxy(25,17);    cprintf("                                                                ");
        gotoxy(25,18);    cprintf("Filiere              :..........................................");
        gotoxy(25,19);    cprintf("                                                                ");
        gotoxy(25,20);    cprintf("Tele                 :.......0..................................");
        gotoxy(25,21);    cprintf("                                                                ");
        gotoxy(25,22);    cprintf("Annee_inscrit        :..........................................");
        gotoxy(25,23);    cprintf("                                                                ");

            gotoxy(55,12); cprintf("%d",j);
            gotoxy(55,14);  cprintf("%s ",stdnt[j].nome);
            gotoxy(55,16); cprintf("%s ",stdnt[j].prenome);
            gotoxy(55,18); cprintf("%s ",stdnt[j].filiere);
            gotoxy(55,20); cprintf("%d ",stdnt[j].tele);
            gotoxy(55,22); cprintf("%d  ",stdnt[j].annee_inscrit);
          textcolor(BLACK);textbackground(GREEN);
     gotoxy(40,24);cprintf("     "); gotoxy(75,24);cprintf("     ");
     gotoxy(40,25);cprintf("  <  "); gotoxy(75,25);cprintf("  >  ");
     gotoxy(40,26);cprintf("     "); gotoxy(75,26);cprintf("     ");
    textcolor(WHITE);textbackground(RED); gotoxy(21,29);cprintf("si vous voller aller a le menu principalle tape 1 le menu des etudiant tape 2");
    action=getch();
    action=getch();
    if(action==77){
        j++;
        if (j>=e) j--;
        goto menu;}
    if(action==75)
    {
        if(j>1)
        j--;
        goto menu;
    }
    else{
        if(action==49){
        clrscr();
        menu();}
        else{
        clrscr();
        menu1();}
        }
}

int recherche(int ad)
{
    int i,ax=-1,a=0;

   for (i=1;i<=e;i++)
   {
       if (ad==stdnt[i].numero){
            ax=i;
       break;}
       else
        ax=-1;
   }
  return ax ;
}




void afficherdecherch(int op)
{

    int action;


    gotoxy(40,2); cprintf("                                        ");
    gotoxy(40,3); cprintf("                                        ");
    gotoxy(40,4); cprintf("****les donner de l'etudiant num %d****  ",op);
    gotoxy(40,5); cprintf("                                        ");
    gotoxy(40,6); cprintf("                                        ");

    gotoxy(25,8);    cprintf("                                                                 ");
    gotoxy(25,9);    cprintf("                      GESTION DES ETUDIANTS                      ");
    gotoxy(25,10);   cprintf("________________________________________________________________ ");
    gotoxy(25,11);   cprintf("                                                                 ");
    gotoxy(25,12);   cprintf("Numero De l'Etudiant :...........................................");
    gotoxy(25,13);   cprintf("                                                                 ");
    gotoxy(25,14);   cprintf("Nom                  :...........................................");
    gotoxy(25,15);   cprintf("                                                                 ");
    gotoxy(25,16);   cprintf("prenom               :...........................................");
    gotoxy(25,17);   cprintf("                                                                 ");
    gotoxy(25,18);   cprintf("Filiere              :...........................................");
    gotoxy(25,19);   cprintf("                                                                 ");
    gotoxy(25,20);   cprintf("Tele                 :...........................................");
    gotoxy(25,21);   cprintf("                                                                 ");
    gotoxy(25,22);   cprintf("Annee_inscrit        :...........................................");
    gotoxy(25,23);   cprintf("                                                                 ");

            gotoxy(55,12); cprintf("%d",op);
            gotoxy(55,14);  cprintf("%s ",stdnt[op].nome);
            gotoxy(55,16); cprintf("%s ",stdnt[op].prenome);
            gotoxy(55,18); cprintf("%s ",stdnt[op].filiere);
            gotoxy(55,20); cprintf("%d ",stdnt[op].tele);
            gotoxy(55,22); cprintf("%d  ",stdnt[op].annee_inscrit);

   gotoxy(8,28);printf("si vous voller aller a le menu principale tape 1 le menu des etudiant tape 2");
    action=getch();

            if(action==49){
                clrscr();
                menu();}
            else{
                clrscr();
                menu1();}

}



void mod(int md)
{
    int choix,val1,action;
    char val2[15];

    textcolor(2);textbackground(7);
       gotoxy(25,4);cprintf("                                                              ");
       gotoxy(25,5);cprintf("                    Modifier DE ETUDIANT                      ");
       gotoxy(25,6);cprintf("______________________________________________________________");
       gotoxy(25,7);cprintf("                                                              ");
       gotoxy(25,8);cprintf("1-le nome d'etudiant                                          ");
       gotoxy(25,9);cprintf("                                                              ");
       gotoxy(25,10);cprintf("2-le prenome d'etudiant                                      ");
       gotoxy(25,11);cprintf("                                                             ");
       gotoxy(25,12);cprintf("3-la fellier d'etudiant                                      ");
       gotoxy(25,13);cprintf("                                                             ");
       gotoxy(25,14);cprintf("4-le numero de telephone d'etudiant                          ");
       gotoxy(25,15);cprintf("                                                             ");
       gotoxy(25,16);cprintf("5-L'Annee d'inscrit                                          ");
       gotoxy(25,17);cprintf("                                                             ");

       gotoxy(30,25);cprintf("votre choix   :                                             ");
       choix=getch();

    switch (choix)
    {
case 49 :
    gotoxy(30,27);cprintf("donner le nouvou valuere ");
    gotoxy(59,27);cscanf("%s",&val2);
    strcpy(stdnt[md].nome,val2);
    gotoxy(8,28);printf("si vous voller aller a le menu principalle tape 1 le menu des etudiant tape 2");
    action=getch();

            if(action==49){
                clrscr();
                menu();}
            else{
                clrscr();
                menu1();}
 break;
 case 50 :
    gotoxy(30,27);cprintf("donner le nouvou valuere ");
    gotoxy(59,27);cscanf("%s",&val2);
    strcpy(val2,stdnt[md].nome);
  break;
  case 51 :
    gotoxy(30,27);cprintf("donner le nouvou valuere ");
    gotoxy(59,27);cscanf("%s",&val2);
    strcpy(val2,stdnt[md].nome);
    gotoxy(8,28);printf("si vous voller aller a le menu principalle tape 1 le menu des etudiant tape 2");
    action=getch();

            if(action==49){
                clrscr();
                menu();}
            else{
                clrscr();
                menu1();}
  break ;
   case 52 :
    gotoxy(30,27);cprintf("donner le nouvou valuere ");
    gotoxy(59,27);cscanf("%d",&val1);
    stdnt[md].tele=val1;
    gotoxy(8,28);printf("si vous voller aller a le menu principalle tape 1 le menu des etudiant tape 2");
    action=getch();

            if(action==49){
                clrscr();
                menu();}
            else{
                clrscr();
                menu1();}
    break ;
    case 53 :
    gotoxy(30,27);cprintf("donner le nouvou valuere ");
    gotoxy(59,27);cscanf("%d",&val1);
    stdnt[md].annee_inscrit=val1;
    gotoxy(8,28);printf("si vous voller aller a le menu principalle tape 1 le menu des etudiant tape 2");
    action=getch();

            if(action==49){
                clrscr();
                menu();}
            else{
                clrscr();
                menu1();}
    break ;


}
}


void suppre(int ab)
{
    int i;
    recherche(ab);
    gotoxy(5,5);printf("Vous etes entraine de  supprimer  %s %s      ",stdnt[ab].nome,stdnt[ab].prenome);
    for (i=ab;i<=e;i++)
        {
            stdnt[i].numero=stdnt[i+1].numero;
            strcpy(stdnt[i].nome,stdnt[i+1].nome);
            strcpy(stdnt[i].prenome,stdnt[i+1].prenome);
            stdnt[i].tele=stdnt[i+1].tele;
            stdnt[i].annee_inscrit=stdnt[i+1].annee_inscrit;
        }
        e--;
        sleep (4);
        printf("\n\nle suprimation a est est bien effuctuier ");
        printf("\n\nTape key to go a menu ");
        getch();
        menu1();

}


//les fonction d ovrage


/* la fonction du menu de la fonction consulté*/

void menuconsulterouvrage(void){
    clrscr();
    system("color f0");
    textbackground(WHITE);
    textcolor(BLACK);
    cprintf("                                              GESTION DES OUVRAGES                                                      ");
    gotoxy(10,5); printf("             Numero          :..........................................\n\n");
    gotoxy(10,7); printf("             Titre           :..........................................\n\n");
    gotoxy(10,9); printf("             Annee d'edition :..........................................\n\n");
    gotoxy(10,11); printf("             Auteur          :..........................................\n\n");
    gotoxy(10,13); printf("             Specialite      :..........................................\n\n");

    textbackground(GREEN);
    textcolor(WHITE);
    gotoxy(30,16); cprintf("       ");       gotoxy(50,16); cprintf("       ");       gotoxy(70,16); cprintf("       ");
    gotoxy(30,17); cprintf("  <--  ");       gotoxy(50,17); cprintf(" |___| ");       gotoxy(70,17); cprintf("  -->  ");
    gotoxy(30,18); cprintf("       ");       gotoxy(50,18); cprintf("       ");       gotoxy(70,18); cprintf("       ");

    textbackground(WHITE);
    textcolor(BLACK);
    gotoxy(1,21); cprintf("F1:Nouveau                F2:Consulter                 F3:Modifier                  F4:Supprimer                ESC:MENU");

}

/* la fonction de l'ajoutement d'un ouvrage*/

void nouveauouvrage(void){
    gotoxy(40,5);     printf("%d",x[i].num);
    gotoxy(40,7);       scanf("%s",&x[i].titre);
    do{ gotoxy(40,9);     printf("..........................................");     gotoxy(40,9);       scanf("%d",&x[i].annee);    }while(x[i].annee>2019);
    gotoxy(40,11);      scanf("%s",&x[i].auteur);
    gotoxy(40,13);      scanf("%s",&x[i].specialite);
    i++;x[0].alpha=i;}   /* ici je met mon variable pour que le tabbleau varie en cours des nouveau ouvrage */

/* la fonction de consulté les ouvrages*/

void consulterouvrage(void){
    int j=0;
    char action;
    B :
    menuconsulterouvrage();
    gotoxy(40,5);
    printf("%d",x[j].num);
    gotoxy(40,7);
    printf("%s",x[j].titre);
    gotoxy(40,9);
    printf("%d",x[j].annee);
    gotoxy(40,11);
    printf("%s",x[j].auteur);
    gotoxy(40,13);
    printf("%s",x[j].specialite);

    action=getch();
    if(action==32) goto A;
    action=getch();

    if(action==77){j++;
        if(j>=i) j--;
        goto B;}
    else if(action==75){
        if(j>0)
            j--;
        goto B;}
    A :
}

/* la fonction de modification d'un ouvrage */

void modifierouvrage(int n){
    int j;
    clrscr();
    menuouvrage();
    for(j=0;j<i;j++)
    if(x[j].num==n){
        gotoxy(45,3);
        printf("donner le nouveau d'ouvrage: ");
        gotoxy(40,5);       printf("%d",x[j].num);
        gotoxy(40,7);       scanf("%s",&x[j].titre);
        do{ gotoxy(40,9);     printf("..........................................");     gotoxy(40,9);       scanf("%d",&x[j].annee); }while(x[j].annee>2019);
        gotoxy(40,11);      scanf("%s",&x[j].auteur);
        gotoxy(40,13);      scanf("%s",&x[j].specialite);
        goto C;}

    gotoxy(40,3);   printf("Le numero d'ouvrage n'est pas enregistrer");
    sleep (3);
    C :
}

/* la fonction de suppression d'un ouvrage*/

void supprimerouvrage(int m){
    int j,k;
    for(j=0;j<i;j++)
    if(x[j].num==m){
        for(k=j;k<i+1;k++){
            strcpy(x[k].titre,x[k+1].titre);
            x[k].annee=x[k+1].annee;
            strcpy(x[k].auteur,x[k+1].auteur);
            strcpy(x[k].specialite,x[k+1].specialite);}x[0].alpha--;
        clrscr();
        menuouvrage();
        gotoxy(40,3);   printf("L'ouvrage a ete bien supprimer");
        i--;    sleep (3);
        goto D;}

        clrscr();
        menuouvrage();
        gotoxy(40,3);   printf("Le numero d'ouvrage n'est pas enregistrer");
        sleep (2);
    D :
}

/* un fonction pour manipulé le menu d'ouvrage*/

void ouvrage(void){
    int nombre,z;

    for(z=0;z<500;z++)
        x[z].num=z;

    Menu :
    clrscr();
    menuouvrage();
    gotoxy(0,20);
    choix=getch();
    if(choix==27){
        gotoxy(40,3);
        printf("Au revoir !!");
        sleep(1);
        clrscr();
        pricipale();
        }
    choix=getch();
    switch(choix){
    case 59:
        menuouvrage();
        nouveauouvrage();
        break;
    case 60:
        consulterouvrage();
        break;
    case 61:
        clrscr();
        menuouvrage();
        gotoxy(45,3);
        printf("donner le numero d'ouvrage: ");
        gotoxy(40,5);     scanf("%d",&nombre);
        modifierouvrage(nombre);
        break;
    case 62:
        clrscr();
        menuouvrage();
        gotoxy(45,3);
        printf("donner le numero d'ouvrage: ");
        gotoxy(40,5);     scanf("%d",&nombre);
        supprimerouvrage(nombre);
        break;
    }
    clrscr();
    goto Menu;
}

void menuouvrage(void){
    clrscr();
    system("color f0");
    textbackground(WHITE);
    textcolor(BLACK);
    cprintf("                                              GESTION DES OUVRAGES                                                      ");
    gotoxy(10,5); printf("             Numero          :..........................................\n\n");
    gotoxy(10,7); printf("             Titre           :..........................................\n\n");
    gotoxy(10,9); printf("             Annee d'edition :..........................................\n\n");
    gotoxy(10,11); printf("             Auteur          :..........................................\n\n");
    gotoxy(10,13); printf("             Specialite      :..........................................\n\n");

    textbackground(GREEN);
    textcolor(WHITE);
    gotoxy(40,16); cprintf("                 ");             gotoxy(60,16); cprintf("             ");
    gotoxy(40,17); cprintf("   ENREGISTRER   ");             gotoxy(60,17); cprintf("   ANNULER   ");
    gotoxy(40,18); cprintf("                 ");             gotoxy(60,18); cprintf("             ");

    textbackground(WHITE);
    textcolor(BLACK);
    gotoxy(1,21); cprintf("F1:Nouveau                F2:Consulter                 F3:Modifier                  F4:Supprimer                ESC:MENU");
}
/* partie ====================== HOUSSAM ANASSE ============================================ */

void menu_pret(void)
{ clrscr();
    system("color f0");
    textbackground(GREEN);
    textcolor(BLACK);
    cprintf("                                              GESTION DES PRETS                                                         ");
     gotoxy(10,5); printf("        Numero               :..........................................\n\n");
     gotoxy(10,7); printf("        DATE DE DEBUT DE PRET:");gotoxy(41,7);printf(".../");gotoxy(45,7);printf(".../");gotoxy(49,7);printf("......");
     gotoxy(10,9); printf("        DEBUT DE RETOUR      :");gotoxy(41,9);printf(".../");gotoxy(45,9);printf(".../");gotoxy(49,9);printf("......");
     gotoxy(55,11);printf("DUREE DU PRET:../../.....");
     gotoxy(31,14);cprintf("                  ");gotoxy(60,14);cprintf("                  ");
     gotoxy(31,15);cprintf("    ENREGISTRER   ");gotoxy(60,15);cprintf("   ANNULER        ");
     gotoxy(31,16);cprintf("                  ");gotoxy(60,16);cprintf("                  ");
      textbackground(WHITE);
    textcolor(BLACK);
    gotoxy(1,21); cprintf("F1:Nouveau                F2:Consulter                 F3:Modifier                  F4:Supprimer                ESC:MENU");
}
void menu_consulter_pret(void)
{ clrscr();
    system("color f0");
    textbackground(GREEN);
    textcolor(BLACK);
    cprintf("                                              GESTION DES PRETS                                                         ");
     gotoxy(10,5); printf("        Numero               :..........................................\n\n");
     gotoxy(10,7); printf("        DATE DE DEBUT DE PRET:");gotoxy(41,7);printf(".../");gotoxy(45,7);printf(".../");gotoxy(49,7);printf("......");
     gotoxy(10,9); printf("        DEBUT DE RETOUR      :");gotoxy(41,9);printf(".../");gotoxy(45,9);printf(".../");gotoxy(49,9);printf("......");
     gotoxy(55,11);printf("DUREE DU PRET:../../......");
     gotoxy(10,14);cprintf("    <==========   ");gotoxy(83,14);cprintf("    ==========>   ");gotoxy(48,14);cprintf("    |==========|   ");
     gotoxy(10,15);cprintf("    <==========   ");gotoxy(83,15);cprintf("    ==========>   ");gotoxy(48,15);cprintf("    |==========|   ");
     gotoxy(10,16);cprintf("    <==========   ");gotoxy(83,16);cprintf("    ==========>   ");gotoxy(48,16);cprintf("    |==========|   ");
      textbackground(WHITE);
    textcolor(BLACK);
    gotoxy(1,21); cprintf("F1:Nouveau                F2:Consulter                 F3:Modifier                  F4:Supprimer                ESC:MENU");
}




void nouveau_pret(void){ y[r].num=r+1;
    gotoxy(40,5);     printf("%d",y[r].num);
   do{ gotoxy(42,7);       scanf("%d",&y[r].debut1);}while(y[r].debut1<0 || y[r].debut1>30);
   do{gotoxy(46,7);       scanf("%d",&y[r].debut2);}while(y[r].debut2<0 || y[r].debut2>12);
   do{ gotoxy(50,7);       scanf("%d",&y[r].debut3);}while(y[r].debut3<0 || y[r].debut3<2019);
   do{ gotoxy(42,9);       scanf("%d",&y[r].retour1);}while(y[r].retour1<0 || y[r].retour1>30);
   do{gotoxy(46,9);       scanf("%d",&y[r].retour2);}while(y[r].retour2<0 || y[r].retour2>12);
   do{gotoxy(50,9);       scanf("%d",&y[r].retour3);}while(y[r].retour3<=0 || y[r].retour3<2019 || y[r].retour3<y[r].debut3);
 y[r].duree3=y[r].retour3-y[r].debut3;
   if(y[r].retour2>=y[r].debut2)
        y[r].duree2=y[r].retour2-y[r].debut2;
        else{y[r].duree2=y[r].retour2-y[r].debut2+12;
             y[r].duree3--;}
   if(y[r].retour1>=y[r].debut1)
        y[r].duree1=y[r].retour1-y[r].debut1;
        else{y[r].duree1=y[r].retour1-y[r].debut1+31;
             y[r].duree2--;}
gotoxy(69,11);   printf("%d",y[r].duree1);
gotoxy(72,11);   printf("%d",y[r].duree2);
gotoxy(75,11);   printf("%d",y[r].duree3);getch();

   r++;}
void consulter_pret(void){
 int j=0;
 char action;
 b:
   menu_consulter_pret();
gotoxy(40,5);   printf("%d",y[j].num);
gotoxy(42,7);   printf("%d",y[j].debut1);
gotoxy(46,7);   printf("%d",y[j].debut2);
gotoxy(50,7);   printf("%d",y[j].debut3);
gotoxy(42,9);   printf("%d",y[j].retour1);
gotoxy(46,9);   printf("%d",y[j].retour2);
gotoxy(50,9);   printf("%d",y[j].retour3);
gotoxy(69,11);   printf("%d",y[j].duree1);
gotoxy(72,11);   printf("%d",y[j].duree2);
gotoxy(75,11);   printf("%d",y[j].duree3);
 action=getch();
    if(action==32) goto a;
    action=getch();

    if(action==77){j++;
        if(j>=r) j--;
        goto b;}
    else if(action==75){
        if(j>0)
            j--;
        goto b;}
    a :}


void modifier_pret(int n){
  int j;
  clrscr();
 menu_pret();
 for(j=0;j<r;j++)
 if(y[j].num==n)
{ gotoxy(45,3);printf("donner le nouveau pret :");
    gotoxy(40,5);     printf("%d",y[j].num);
   do{ gotoxy(42,7);       scanf("%d",&y[j].debut1);}while(y[j].debut1<0 || y[j].debut1>30);
   do{gotoxy(46,7);       scanf("%d",&y[j].debut2);}while(y[j].debut2<0 || y[j].debut2>12);
   do{ gotoxy(50,7);       scanf("%d",&y[j].debut3);}while(y[j].debut3<0 || y[j].debut3<2019);
   do{ gotoxy(42,9);       scanf("%d",&y[j].retour1);}while(y[j].retour1<0 || y[j].retour1>30);
   do{gotoxy(46,9);       scanf("%d",&y[j].retour2);}while(y[j].retour2<0 || y[j].retour2>12);
      do{gotoxy(50,9);       scanf("%d",&y[j].retour3);}while(y[j].retour3<=0 || y[j].retour3<2019 || y[j].retour3<y[j].debut3);
 y[j].duree3=y[j].retour3-y[j].debut3;
   if(y[j].retour2>=y[j].debut2)
        y[j].duree2=y[j].retour2-y[j].debut2;
        else{y[j].duree2=y[j].retour2-y[j].debut2+12;
             y[j].duree3--;}
   if(y[j].retour1>=y[j].debut1)
        y[j].duree1=y[j].retour1-y[j].debut1;
        else{y[j].duree1=y[j].retour1-y[j].debut1+31;
             y[j].duree2--;}
gotoxy(69,11);   printf("%d",y[j].duree1);
gotoxy(72,11);   printf("%d",y[j].duree2);
gotoxy(75,11);   printf("%d",y[j].duree3);getch();
    goto c;}

gotoxy(40,3);   printf("Le numero de pret n'est pas enregistrer");
    sleep (3);
     c:
}

void supprimer_pret(int m)
{
    int j,k;
    for(j=0;j<r;j++)
    if(y[j].num==m){
        for(k=j;k<r+1;k++){
        y[k].debut1=y[k+1].debut1;
        y[k].debut2=y[k+1].debut2;
        y[k].debut3=y[k+1].debut3;
        y[k].retour1=y[k+1].retour1;
        y[k].retour2=y[k+1].retour2;
        y[k].retour3=y[k+1].retour3;
        y[k].duree1=y[k+1].duree1;
        y[k].duree2=y[k+1].duree2;
        y[k].duree3=y[k+1].duree3;
         }
        clrscr();
        menu_pret();
        gotoxy(40,3);   printf("Le pret a ete bien supprimer");
        r--;    sleep (3);
        goto D;
      }
      clrscr();
        menu_pret();
        gotoxy(40,3);   printf("Le numero de pret n'est pas enregistrer");
        sleep (3);
    D :}



   void khadija(void){
    int nombre;



    Menu :
    clrscr();
    menu_pret();
    gotoxy(0,20);
    choice=getch();
if(choice==27){
        gotoxy(40,3);
        printf("Au revoir !!");
        sleep(1);
        clrscr();
        pricipale();
        }
    choice=getch();
    switch(choice){
    case 59:
        menu_pret();
        nouveau_pret();
        break;
    case 60:
        consulter_pret();
        break;
    case 61:
        clrscr();
        menu_pret();
        gotoxy(45,3);
        printf("donner le numero de pret: ");
        gotoxy(40,5);     scanf("%d",&nombre);
        modifier_pret(nombre);
        break;
    case 62:
        clrscr();
        menu_pret();
        gotoxy(45,3);
        printf("donner le numero de pret: ");
        gotoxy(40,5);     scanf("%d",&nombre);
        supprimer_pret(nombre);
        break;
        }
        clrscr();
    goto Menu;
         }

/* partie ====================== HOUSSAM BAALOUL ============================================ */
void houssam()
{

int a;
    system("color f0");

    menu_gestion_etat();
    cadre_table();
    getch();




return;
}
/* dial  */
void menu_gestion_etat()
{ /* le menu primcipale pour la gestion d'eata */
    int f;
    clrscr();
      system("color f0");
     textbackground(BLUE);
             textcolor(YELLOW);
    gotoxy(45,8);cprintf("                                   ");
    gotoxy(45,9);cprintf("         GENERATION D'EATATS       ");
   gotoxy(45,10);cprintf("                                   ");
 textbackground(GREEN);
   gotoxy(45,13);cprintf("                                   ");
   gotoxy(45,14);cprintf("           PRET EN COURS           ");
   gotoxy(45,15);cprintf("                                   ");
textbackground(BLUE);
   gotoxy(45,16);cprintf("                                   ");
   gotoxy(45,17);cprintf("              QUITTER              ");
   gotoxy(45,18);cprintf("                                   ");
   printf("\n\n\n\n\n");
   printf("si vous voulez entrer taper 1 et si vous voulez quitter taper 2");
   scanf("%d",&f);
   if(f==1){goto F;}
   if(f==2){clrscr();pricipale();}
   F:

}

void cadre_table()
{  int x,y,i,j,k;

    int b;
    getch();
   clrscr();
   system("color f0");
   textbackground(LIGHTBLUE);

 x=1;y=1;j=0;

  gotoxy(x,y);for(i=0;i<120;i++){cprintf(" ");}
y+=1;
  while(j<3){
   for(i=0;i<2;i++){gotoxy(x,y);cprintf(" ");x+=5;}
 x=23+5;
   for(i=0;i<5;i++){gotoxy(x,y);cprintf(" ");x+=23;}
 j++;y+=1;x=1;}
  gotoxy(x,y);for(i=0;i<120;i++){cprintf(" ");}
j=0;
k=0;
  /*partie de remplissage*/

 hh(b);b=*p;;/*je ne sais pas pourquoi il est fair grace a ;; 3ytna 3la l fonction */
 while(k<b){ /*ici ou on va faire la relation entre les fonctions pour declarer la valeur de k */
   gotoxy(x,y);for(i=0;i<120;i++){cprintf(" ");}
y+=1;
  while(j<2){
   for(i=0;i<2;i++){gotoxy(x,y);cprintf(" ");x+=5;}
 x=23+5;
   for(i=0;i<5;i++){gotoxy(x,y);cprintf(" ");x+=23;}
 j++;y+=1;x=1;}
  gotoxy(x,y);for(i=0;i<120;i++){cprintf(" ");}
k++;j=0;
 }
remplissez_table_pret();printf("\n\n\n\n");
printf("si vous vouler aller aux menu principale taper 1 si vous vouler sortir du programme taper 2:");
scanf("%d",&x);
if(x==1){clrscr();pricipale();}
if(x==2){goto B;}printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

B:


}

void remplissez_table_pret()
{ int s;int a=6;
gotoxy(2,3);printf("PRET");
gotoxy(7,3);printf("    NOM ETUDIANT");
gotoxy(29,3);printf("  DATE DEBUT PRET");
gotoxy(52,3);printf("  DATE DE RETOUR");
gotoxy(75,3);printf("   OUVRAGE");
gotoxy(98,3);printf("   SPECIALITE");
for(s=0;s<x[0].alpha;s++){ gotoxy(75,a);printf("%s",x[s].titre);a+=3; }    /* ======= ALLER A PARTIE ANASS =====*/
a=6;
for(s=0;s<x[0].alpha;s++){ gotoxy(98,a);printf("%s",x[s].specialite);a+=3; } /* ======= ALLER A PARTIE ANASS =====*/
a=6;
for(s=0;s<x[0].alpha;s++){ gotoxy(7,a);printf("%s",stdnt[s+1].nome);a+=3;} /* aller partie                 */
a=6;
for(s=0;s<x[0].alpha;s++){gotoxy(3,a);printf("%d",y[s].num);a+=3;} // partie houssam anass
a=6;
for(s=0;s<x[0].alpha;s++){gotoxy(30,a);printf("%d/%d/%d",y[s].debut1,y[s].debut2,y[s].debut3);a+=3;}// partie houssam anasse
a=6;
for(s=0;s<x[0].alpha;s++){gotoxy(53,a);printf("%d/%d/%d",y[s].retour1,y[s].retour2,y[s].retour3);a+=3;}
}
void hh(int b)
{
   b=x[0].alpha;;    /* pourqoui  deux ;; je ne sais pas */
p=&b;
}

