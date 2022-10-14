#include <stdio.h>
#include "double_mod.h"

int main()
{
    float f_init, f_mod, f_result;
    double d_init, d_mod, d_result;

    /* FLOAT : DEFAULT*/
    f_init = 11.13;
    f_mod = 10.0;
    f_result = float_mod(f_init, f_mod);
    printf("float  result : %f\n", f_result); // float  result : 1.130000

    /* FLOAT : ERROR */
    f_init = 11.13;
    f_mod = 0;
    f_result = float_mod(f_init, f_mod);
    printf("float  result : %f\n", f_result); // float  result : -1.000000

    /* DOUBLE : DEFAULT */
    d_init = 123.141;
    d_mod = 19.19;
    d_result = float_mod(d_init, d_mod);
    printf("double result : %f\n", d_result); // double result : 8.000988

    /* DOUBLE : ERROR */
    d_init = 123.141;
    d_mod = -100;
    d_result = float_mod(d_init, d_mod);
    printf("double result : %f\n", d_result); // double result : -1.000000

    /* ERROR HANDLE */
    if (d_result != MOD_ERROR_RESULT)
        printf("result is clean\n");
    else
        printf("result is failure\n"); // result is failure

    return 0;
}