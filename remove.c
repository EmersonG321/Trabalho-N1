#include "remove.h"
#include<stdio.h>
#include<math.h>

int func_val(int e, int l) {
    double valor0 = 186.752;
    double valor1 = -148.235;
    double valor2 = 34.5049;
    double valor3 = -3.5091;
    double valor4 = 0.183166;
    double valor5 = -0.00513554;
    double valor6 = 0.0000735464;
    double valor7 = -4.22038 * pow(10, -7);

    double resultado = valor0 + (valor1 + l) * e + valor2 * pow(e, 2) + valor3 * pow(e, 3) + valor4 * pow(e, 4) + valor5 * pow(e, 5) + valor6 * pow(e, 6) + valor7 * pow(e, 7);
    return round(resultado);
}
