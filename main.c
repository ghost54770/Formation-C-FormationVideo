#include "joueur.h"
#include <stdio.h>
#define INDICE_TABLEAU 5
#define TVA 125

//float *pointeurTVA = &TVA;

void afficherTableau(int tab[], int taille);


void main(void)
{
    messageDate();
    int intTableau[INDICE_TABLEAU] = {0,1,2,3,4};
    afficherTableau(intTableau,INDICE_TABLEAU);
    
}

void afficherTableau(int tab[], int taille)
{
    for(int i = 0; i < taille ; i++)   
        printf("%d", tab[i]);
}
