#define MOD_ERROR_RESULT -1.

float float_mod(float initial, float mod);
double double_mod(double initial, double mod);

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