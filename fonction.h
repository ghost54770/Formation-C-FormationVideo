#include <stdio.h>
#include <time.h>

void MessageDate(void){
    time_t t = time(NULL);
    printf("%s\n\n", ctime(&t));
}