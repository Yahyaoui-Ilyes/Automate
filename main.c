#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void art()
{
    printf(

            "                       _______   __   __   _______   _______   __   __   _______   _______   _______ \n"
            "                      |   _   | |  | |  | |       | |       | |  |_|  | |   _   | |       | |       |\n"
            "                      |  |_|  | |  | |  | |_     _| |   _   | |       | |  |_|  | |_     _| |    ___|\n"
            "                      |       | |  |_|  |   |   |   |  | |  | |       | |       |   |   |   |   |___ \n"
            "                      |       | |       |   |   |   |  |_|  | |       | |       |   |   |   |    ___|\n"
            "                      |   _   | |       |   |   |   |       | | ||_|| | |   _   |   |   |   |   |___ \n"
            "                      |__| |__| |_______|   |___|   |_______| |_|   |_| |__| |__|   |___|   |_______|\n\n"


    );
    printf("                                            +---------------------------------+\n"
           "                                            |   I L Y E S  Y A H Y A O U I    |\n"
           "                                            |           I I 1 F               |\n"
           "                                            |    ilyes.yahyaoui@ensi-uma.tn   |\n"
           "                                            +---------------------------------+\n\n\n" );}

void compile(char *s) {
    int T[4][3],e=0,l=0,i;

//Table de transitions
    T[0][0]=1; T[0][1]=0; T[0][2]=0;
    T[1][0]=1; T[1][1]=2; T[1][2]=0;
    T[2][0]=3; T[2][1]=0; T[2][2]=0;
    T[3][0]=1; T[3][1]=2; T[3][2]=0;

//La longeur du mot
    l=strlen(s);

    printf("\n+--------------------------------------------+ T R A N S I T I O N S +-------------------------------------------------+\n");
//Parcours du mot et mise à jour de l'état
    for(i=0;i<l;i++)
    {

        switch (s[i])
        {   case 'a':e = T[e][0];printf("--->%d ",e);continue;
            case 'b':e = T[e][1];printf("--->%d ",e);continue;
            case 'c':e = T[e][2];printf("--->%d ",e);continue;

                //S'il y a une lettre qui n'appartient pas au vocabulaire {a,b,c} on arrête le processus
            default:
            {printf("\n+------> ERREUR <------+ :\nLe mot choisit n'appartient pas au vocabulaire {a,b,c} verifiez la lettre %c\n",s[i]);
                return;}


        }

    }
    printf("\n\n+-----------------------------------------------+ R E S U L T A T +----------------------------------------------------+\n");

    if(e==3) printf("\n Le mot est accepte par l'automate\n\n");
    else printf("\nLe mot est refuse par l'automate\n\n");


}


int main( )
{   char *mot; short x=0;


while(x==0)
{   art();
    printf("+-------------------------------------------------+ D E B U T +--------------------------------------------------------+\n");
    mot=(char *)malloc(10000*sizeof(char));
    printf("Saisir le mot :   ");


    scanf("%s",mot);
     printf("Le mot selectionne :  %s ",mot);
    compile(mot);

    free(mot);
       printf("+---------------------------------------------------+ F I N +----------------------------------------------------------+\n");
printf("\n+----------------------------------------------+ R E C O M P I L E R +-------------------------------------------------+\n");
    printf("Compiler un autre mot ?\noui: 0 \nnon: autre cle \n Votre choix -> ");
    scanf("%d",&x);


     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}


    return 0;}

