#include <iostream>

using namespace std;

double quadrado(double x){
    return x*x;
}

void imprime_quadrado(double x){
    cout << "o quadrado de "<< x << "eh" << quadrado(x)
}