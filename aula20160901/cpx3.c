#include <stdio.h>
#include <complex.h>
int main () {
    double complex  Z1;
    double preal,pimag;
    printf("real  de Z1:"); scanf("%lf",&preal) ;
    printf("imag de Z1:"); scanf("%lf",&pimag) ;

    Z1 = preal * pimag ;
return 0;
}
