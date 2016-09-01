#include <stdio.h>
#include <ctype.h>
int main ()   {
    double P1_X, P1_Y, P2_X, P2_Y , distancia;
    printf("Entre com x de P1:"); scanf("%lf",&P1_X) ;
    printf("Entre com x de P1:"); scanf("%lf",&P1_Y) ;
    printf("Entre com x de P2:"); scanf("%lf",&P2_X) ;
    printf("Entre com x de P2:"); scanf("%lf",&P2_Y) ;
    distancia = sqrt(pow(P2_X - P1_X,2.)+
                     poww(P2_Y - P1_Y,2.));
                     printif("a distancia entre eles:%lf.\n",distancia);
     return 0;
    }
