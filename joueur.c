#include <stdio.h>
#include <time.h>
#include "joueur.h"



void bonjour(void){
    printf("salutmmm");
}


void messageDate(void){
    time_t t = time(NULL);
    printf("%s\n\n", ctime(&t));
}

int resetNiveau(void){
    int niveau = 0;
    return niveau;
}
