#define MOD_ERROR_RESULT -1. /* ERROR STATEMENT */

float float_mod(float initial, float mod);
double double_mod(double initial, double mod);

/* 
    Mod function for 'float' 
    
    result = initial % mod

    Params :
        float initial - initial value
        float mod     - mod value
    
    Return :
        float result  - result of calculation
*/
float float_mod(float initial, float mod)
{
    if (mod <= 0)       return MOD_ERROR_RESULT;
    if (initial == mod) return 0.;
    if (initial < mod)  return initial;

    while (initial > mod) {
        initial -= mod;
    }
    return initial;
}

/* 
    Mod function for 'double' 
    
    result = initial % mod

    Params :
        double initial - initial value
        double mod     - mod value
    
    Return :
        double result  - result of calculation
*/
double double_mod(double initial, double mod)
{
    if (mod <= 0)       return MOD_ERROR_RESULT;
    if (initial == mod) return 0.;
    if (initial < mod)  return initial;

    while (initial > mod) {
        initial -= mod;
    }
    return initial;
}