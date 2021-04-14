//©c3nt4ur1 - 2021

//Inclusões
#include <iostream>
#include <windows.h> //Título do console
#include "mainFuncs.h" // Chamadas dentro das categorias 1-5
#include "otherFunctions.h" //Outras funções

// Constantes de opções: Substituem os char's no control-flow
//Constantes estão escritas em HD. As letras possuem uma constante para maiúsculas e outra para minúsculas
#define OPERACOES_BASICAS 0x31
#define FORMULAS_GEOMETRICAS 0x32
#define POTENCIAS_E_RAIZES 0x33
#define EQUACOES 0x34
#define FORMULAS_FISICAS 0x35
#define HELP_MIN 0x68
#define HELP_MAI 0x48
#define DEVINFO_MIN 0x64
#define DEVINFO_MAI  0x44
#define ABOUT_MIN 0x61
#define ABOUT_MAI 0x41
//Namespaces
using namespace std;
int main() {
    //Configuração do Console
    SetConsoleTitle("HyperCalc");
    //Programa vai dentro desse loop
    while (true) {
        char categoria;

        cout << "@github.com/c3nt4ur1 - 2021\n";
        cout << "\n\nBem vindo ao HyperCalc!\n\n";

        cout << "Digite o numero da categoria de calculo desejado: \n";
        cout << "1)Operacoes Basicas\n";
        cout << "2)Formulas geometricas\n";
        cout << "3)Potencias e Raizes\n";
        cout << "4)Equacoes\n";
        cout << "5)Formulas Fisicas\n\n";
        cout << "Para ajuda digite 'h'. Para mais informaçoes digite 'a'.\n";
        cin >> categoria;

        if (categoria == OPERACOES_BASICAS) {
            cat1();
            //em mainFuncs.cpp/.h
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == FORMULAS_GEOMETRICAS) {
            cat2();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == POTENCIAS_E_RAIZES) {
            cat3();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);

        } else if (categoria == EQUACOES) {

            cat4();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == FORMULAS_FISICAS) {
            cat5();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);

        } else if(categoria == HELP_MIN || categoria == HELP_MAI) {
            help();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            } else {
                exit(0);
            }
        } else if(categoria == DEVINFO_MIN || categoria == DEVINFO_MAI) {
            devInfo();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            } else {
                exit(0);
            }
        } else if(categoria == ABOUT_MIN || categoria == ABOUT_MAI){
            about();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            } else {
                exit(0);
            }
        } else {
            cout << "Opcao Invalida!\nCarregando a ajuda...\n\n";
            help();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            } else {
                return 1;
            }
        }
    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|
