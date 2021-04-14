//©c3nt4ur1 - 2021

//Criar opções -h (Help) e -a (About) e -d(DevInfo)
// Controlar versão da build

//Inclusões

#include <iostream>
#include <windows.h> //Título do console
#include "mainFuncs.h" // Chamadas dentro das categorias 1-5
#include "otherFunctions.h" //Outras funções

// Constantes de opções: Substituem os char's no control-flow
#define OPERACOES_BASICAS '1'
#define FORMULAS_GEOMETRICAS '2'
#define POTENCIAS_E_RAIZES '3'
#define EQUACOES '4'
#define FORMULAS_FISICAS '5'
#define HELP 'h'
#define DEVINFO 'd'
#define ABOUT 'a'
//Namespaces
using namespace std;
int main() {
    //Configuração do Console
    SetConsoleTitle("HyperCalc");
    //Programa vai dentro desse loop
    while (true) {
        char categoria;

        //Assinatura Funcionando. NÂO ALTERAR!
        cout << "@github.com/c3nt4ur1 - 2021\n";
        cout << "\n\nBem vindo ao HyperCalc!\n\n";

        cout << "Digite o numero da categoria de calculo desejado: \n";
        cout << "1)Operacoes Basicas\n";
        cout << "2)Formulas geometricas\n";
        cout << "3)Potencias e Raizes\n";
        cout << "4)Equacoes\n";
        cout << "5)Formulas Fisicas\n\n";
        cout << "Para ajuda digite 'h'\n";
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

        } else if(categoria == HELP) {
            help();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            }else {
                exit(0);
            }
        }else if(categoria == DEVINFO) {
            devInfo();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            }else {
                exit(0);
            }
        }else if(categoria == ABOUT){
            about();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 'S' || retornar == 's') {
                continue;
            }else {
                exit(0);
            }
        }else {
            cout << "Opcao Invalida. Loading Help...\n\n";
            help(); //Ainda não definido
            cout << "Pressione qualquer tecla para voltar à tela inicial...\n";
            cin.get();
            cin.ignore();
            continue;
        }
    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|
