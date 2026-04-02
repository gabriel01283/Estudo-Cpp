#include <iostream>
using namespace std;

int n1,n2; //Variaveis globais

int main(){

    int n3,n4; //Variaveis locais
    int resultado, resto;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    resultado = (n1 + n2 + n3 + n4)/4;
    resto = resultado % 2;

    cout << "A soma de todas as variaveis: " << resultado << endl;
    cout << "O resto da divisão é: " << resto << endl;


    return 0;
}