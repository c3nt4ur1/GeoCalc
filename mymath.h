//©c3nt4ur1 - 2021

/*
 * Created by c3nt4ur1 on 18/03/2021.
 */

#ifndef GEOCALC_MYMATH_H
#define GEOCALC_MYMATH_H

//Quatro Operações
namespace maths {
    inline double soma(double n1, double n2);
    inline double subtracao(double minuendo, double subtraendo);
    inline double multiplicacao(double fat1, double fat2);
    inline double divisao(double dividendo, double divisor);
//Potência de qualquer grau double e raizes quadradas
    double potencia(double base, int expoente);
    double raiz_quadrada(double radical);
//Equações
    void bhaskara(double a, double b, double c);
//Funções Geométricas
    inline double area_triangulo(double base, double altura);
    inline double area_quadrado(double lado);
    inline double volume_cubo(double lado);
    inline double hipo(double a, double b);
    inline double cat(double a, double c);
    inline double si(double n);
    inline double ai(double n);
    inline double ae(double n);
//Funções Físicas
    inline double densidade(double massa, double volume);
    inline double massa(double volume, double densidade);
    inline double volume(double densidade, double massa);
    inline double cel_fare(double temp_celsius);
    inline double fare_cel(double temp_farenheit);
    inline double cel_kel(double temp_celsius);
    inline double kel_cel(double temp_kelvin);
}
//Funções de teste
bool isPrime(int num);
void divisores(int n);

#endif //GEOCALC_MYMATH_H

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|