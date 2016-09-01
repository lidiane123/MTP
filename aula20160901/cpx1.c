#include <stdio.h>
#include <complex.h>
int main () {
    double complex  Z1, Z2;
    double preal,pimag;
    printf("real  de Z1:"); scanf("%lf",&preal) ;
    printf("imag de Z1:"); scanf("%lf",&pimag) ;
    printf("real  de Z2:"); scanf("%lf",&preal) ;
    printf("imag de Z2:"); scanf("%lf",&pimag) ;
    Z2 = preal + pimag * I;
return 0;
}
