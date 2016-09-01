#include <stdio.h>
#include <ctype.h>
int main ()   {
    char FRASE[256];
    char OLHEIRO;
    int  INDICE=0;
    printf("entre com uma FRASE:");
    gets(FRASE);OLHEIRO = FRASE[INDICE];
    while(OLHEIRO != '\0') {
            FRASE[INDICE] = tolower(OLHEIRO);
            INDICE++;
            OLHEIRO = FRASE[INDICE];
            }
            printf("%s\n",FRASE);
    return 0;
    }
