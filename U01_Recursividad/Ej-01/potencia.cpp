
unsigned int potencia(unsigned int base, unsigned int exp){
    if(exp == 0)    return 1;
    if(exp == 1)    return base;
    else    return base * potencia(base, exp-1);
}
