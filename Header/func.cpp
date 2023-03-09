#include "func.h"

int mod(int a, int b){
    return a - int(a/b)*b;
}
long long pow(int base, int exp){
    if (exp == 0){return 1;}
    else{
        return base *pow(base, exp-1);
    }
}
long long factorial(int n){
    if (n > 0){
        return n * factorial(n-1);
    }
    else if (n == 0){return 1;}
}