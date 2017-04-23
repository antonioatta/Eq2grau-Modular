#include <stdio.h>
#include <math.h>
#include "eq2grau.h"

int delta(int a, int b, int c) {
    return (b*b - 4*a*c);
}

int calcula_raizes(int a, int b, int c, float *pX1, float *pX2) {

    int d;

    d=delta(a, b, c);
    if (d >= 0) {
        *pX1 = (-b + sqrt(d)) / (2*a);
        *pX2 = (-b - sqrt(d)) / (2*a);

    }
    return(d>=0);
}


