//©c3nt4ur1 - 2021

//Funções em mainFuncs.cpp:
//void cat1(), void cat2(), void cat3(), void cat4(), void cat5().

//Inclusões
#include <iostream> //I/O Básico
#include <windows.h> //Título do console
#include "mainFuncs.h" //Chamadas dentro das categorias 1-5 -> Substitui o código pra fazer o controle de fluxo
#include "otherFunctions.h" //Outras funções

//Namespaces
using namespace std;
int main() {
    //Configuração do Console
    SetConsoleTitle("HyperCalc"); //Título
    SetConsoleCtrlHandler(nullptr,true); //Ativa Ctrl+C / Ctrl+V para o programa
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
        cout << "Para ajuda digite 'h'. Para mais informacoes digite 'a'.\n";
        cin >> categoria;

        if (categoria == 0x31) {
            cat1();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == 0x32) {
            cat2();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == 0x33) {
            cat3();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == 0x34) {
            cat4();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == 0x35) {
            cat5();
            cout << "Pressione qualquer tecla para continuar...\n\n";
            signature();
            cin.ignore();
            cin.get();
            exit(0);

        } else if(categoria == 0x68 || categoria == 0x48) {
            help();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 0x53 || retornar == 0x73) {
                continue;
            } else {
                exit(0);
            }
        } else if(categoria == 0x64 || categoria == 0x44) {
            devInfo();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 0x53 || retornar == 0x73) {
                continue;
            } else {
                exit(0);
            }
        } else if(categoria == 0x61 || categoria == 0x41){
            about();
            char retornar;
            cout << "Deseja voltar à tela inicial?(S/N)";
            cin >> retornar;
            if(retornar == 0x53 || retornar == 0x73) {
                continue;
            } else {
                exit(0);
            }
        }
        cout << "Opcao Invalida!\nCarregando a ajuda...\n\n";
        help();
        char retornar;
        cout << "Deseja voltar à tela inicial?(S/N)";
        cin >> retornar;
        if(retornar == 0x53 || retornar == 0x73) {
            continue;
        } else {
            return 1;
        }

    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|
