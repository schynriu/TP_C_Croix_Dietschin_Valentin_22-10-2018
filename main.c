#include <stdio.h>
#include <stdlib.h>

    int main()
    {
//----------------------------- programme principale, croix----------------------------------------
/*
     int nLongueur=1; // longueur entrer par l'utilisateur
     int nI=1;//Horizontale
     int nJ=1;//verticale
     char cSymbole;

        printf("Veuillez ecrire un caractere: ");
        scanf("%c",&cSymbole);
        printf("veuillez ecrire la longueur: ");
        scanf("%d",&nLongueur);

        for (nI=1; nI<=nLongueur;nI++){

            for (nJ=1; nJ<=nLongueur;nJ++){

                if((nI==nJ) || (((nI+nJ)-1)==nLongueur)){// quand nI et/ou nJ sont égal a la longueur, ecrire un caractere

                    printf("%c",cSymbole);
                }

                else{

                    printf(" ");// ecrire le vide
                }
            }

            printf("\n");// retour a la ligne
        }


        return 0;

}
*/
// i=0 et i= longueur, on fait la ligne complete,; sinon on fait un debut ou la fin
//----------------------------------------------------------- carrée

     int nLongueur=1;
     int nI=1;
     int nJ=1;
     char cSymbole;
     char cSymbole2;

        printf("Veuillez ecrire un caractere: ");
        scanf("%c",&cSymbole);
        fflush(stdin);
        printf("Veuillez ecrire un deuxieme caractere: ");
        scanf("%c",&cSymbole2);
        fflush(stdin);// sert a vider la memoire pour eviter que la saisie soit encombrer
        printf("veuillez ecrire la longueur: ");
        scanf("%d",&nLongueur);

        for (nI=1; nI<=nLongueur;nI++){
            for (nJ=1; nJ<=nLongueur;nJ++){
                if((nI==1) || (nI==nLongueur) || (nJ==1) || (nJ==nLongueur)){
                    printf("%c",cSymbole);// quand nI et nJ sont a leur place initale ou egal a longueur, ecrire le caractere
                }
                /*else if((nJ==1) || (nJ==nLongueur)){ // possibilite de faire le if en deux fois
                    printf("%c",cSymbole);
                }*/
                else {
                    printf("%c",cSymbole2); // ecrire le deuxieme symbole
                }
            }
            printf("\n"); // retour a la ligne
          }

        return 0;

    }
