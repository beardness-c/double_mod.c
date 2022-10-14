#define MOD_ERROR_RESULT -1. /* ERROR STATEMENT */

float float_mod(float initial, float mod);
double double_mod(double initial, double mod);

/* Mod function for 'float' */
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

/* Mod function for 'double' */
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