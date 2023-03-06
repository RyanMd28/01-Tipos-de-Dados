// 01-Tipos-de-Dados.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
string nome = " ";
double p1 = 0;
double p2 = 0;
double media = 0;

int main()
{
    cout << "Digite seu nome: ";
    cin >> nome;

    cout << endl << "Digite a nota da P1: ";
    cin >> p1;

    cout << endl << "Digite a nota da P2: ";
    cin >> p2;

    media = (p1 + p2) / 2;

    cout << endl << nome << ", sua nota final e: " << media << endl;

    if (media > 6) {
        cout << "Aprovado. :) " << endl << endl;
    }
    else {
        cout << "Reprovado. :'( " << endl << endl;
    }


}