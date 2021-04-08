#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "mymath.h"
#include "mainFuncs.h"

using namespace std;



int main() {

    //Configuração do Console
    SetConsoleTitle("HyperCalc");

    while (true) {
        char saida;

        char categoria;

        cout << "Digite o numero da categoria de calculo desejado: \n";
        cout << "1)Operacoes Basicas\n";
        cout << "2)Formulas geometricas\n";
        cout << "3)Potencias e Raizes\n";
        cout << "4)Equacoes\n";
        cout << "5)Formulas Fisicas\n";
        cin >> categoria;

        if (categoria == '1') {
            cat1();
            //em mainFuncs.cpp/.h
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == '2') {
            cat2();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == '3') {
            cat3();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);

        } else if (categoria == '4') {

            cat4();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == '5') {
            cat5();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);

        } else {
            cout << "Opcao Invalida\n";
            cout << endl;
        }
    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |  ___   |  | |   | |  |   ____ |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  _   __|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|