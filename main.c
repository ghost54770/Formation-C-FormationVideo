#include "fonction.h"




void main (void){
    MessageDate();


    register int nombre1 = 0;
    register int nombre2 = 0;


    for( nombre1 = 1;  nombre1 < 5000 ; nombre1++){
        nombre2 = nombre1;
        nombre1 += nombre2;
    }


    /*
    %d : nombre entier (int)
    %f : nombre flottant  (float)    %.2f  = 2chiffre apres la virgule
    %c : caractere (char)
    %s : chaine de caractere 
    */
    printf("%d    %.2f     %c      %s",5,3.6,'C',"salut");

}