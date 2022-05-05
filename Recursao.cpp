#include "Recursao.h"

string Recursao::contagemCrescente(int p) {
    // Receba um valor N e retorne os valores de 1 até N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret = "";
    if (p > 0){
        ret += contagemCrescente(p - 1) + "[" + to_string(p) + "]";
    }
    return ret;
}

int Recursao::fatorial(int p) {
    // Receba um valor N e efetue o cálculo de seu fatorial;
    // Seu código aqui
    int fat;
    if (p == 1 || p == 0)
        fat = 1;
    else
        fat = p * fatorial(p - 1);
    return fat;
}

string Recursao::contagemDecrescente(int p) {
    // Receba um valor N e retorne os valores de N até 1 (decrescente);
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret = "";

    if (p > 0){
        ret += "[" + to_string(p) + "]" + contagemDecrescente(p - 1);
    }
    return ret;
}


string Recursao::intervaloCrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui

    string ret = "";
    if (p <= q){
        ret +=  "[" + to_string(p) + "]" + intervaloCrescente(p + 1, q); 
    }

    return ret;


}

string Recursao::intervaloDecrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem decrescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
   string ret = "";
    if (p >= q){
        ret += "[" + to_string(p) + "]" + intervaloDecrescente(p - 1, q); 
    }
    return ret;
}

string Recursao::paresCrescente(int p) {
    // Receba um valor N par e retorne todos os números pares entre 0 e N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
	string ret = "";

    if (p >= 0){
        if (p % 2 == 0)
            ret += paresCrescente(p - 2) + "[" + to_string(p) + "]";
    }
    return ret;
}

