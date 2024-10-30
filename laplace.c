#include <math.h>
#include "laplace.h"

double laplace_transformada(double (*func)(double), double s) {
    double resultado = 0.0;
    double dt = 0.001;  // aproximación de la integral
    for (double t = 0; t < 100; t += dt) {
        resultado += exp(-s * t) * func(t) * dt;
    }
    return resultado;
}

