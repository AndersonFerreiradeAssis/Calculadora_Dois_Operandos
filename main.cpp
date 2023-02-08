#include <iostream>
#include "calculadora.hpp"

using namespace std;

int main()
{


/*    std::cout << "Digite o primeiro operando: " << endl;
    std::cin >> operando_1;
    std::cout << "Digite o segundo operando: " << endl;
    std::cin >> operando_2;

    Calculadora c1(operando_1,operando_2);

    std::cout << "Digite a operacao desejada: " << endl;
    std::cout << "+ : Somar    (Operando 1 + Operando 2) " << endl;
    std::cout << "- : Subtrair    (Operando 1 - Operando 2) " << endl;
    std::cout << "* : Multiplicar    (Operando 1 * Operando 2) " << endl;
    std::cout << "/ : Dividir    (Operando 1 / Operando 2) " << endl;
    std::cout << "p ou P : Potencia    (Operando 1 elevado ao Operando 2) " << endl;
    std::cin >> operacao;


switch (operacao) {
  case '+':
    cout << "Operacao: Somar \n";
    cout << operando_1 << " + " << operando_2 << " = " << c1.SomarNumeros();
    break;
    case '-':
    cout << "Operacao: Subtrair \n";
    cout << operando_1 << " - " << operando_2 << " = " << c1.SubtrairNumeros();
    break;
    case '*':
    cout << "Operacao: Multiplicar \n";
    cout << operando_1 << " * " << operando_2 << " = " << c1.MultiplicarNumeros();
    break;
    case '/':
    cout << "Operacao: Dividir \n";
    cout << operando_1 << " / " << operando_2 << " = " << c1.DividirNumeros();
    break;
    case 'p':
    cout << "Operacao: Potencia \n";
    cout << operando_1 << " Elevado a " << operando_2 << " = " << c1.PotenciaNumeros();
    break;
    case 'P':
    cout << "Operacao: Potencia \n";
    cout << operando_1 << " Elevado a " << operando_2 << " = " << c1.PotenciaNumeros();
    break;

  default:
    cout << "Operacao Invalida";
}
*/
char operacao, desejaContinuar;
double operando_1, operando_2;
do
{


    std::cout << "Digite o primeiro operando: " << endl;
    std::cin >> operando_1;
    std::cout << "Digite o segundo operando: " << endl;
    std::cin >> operando_2;

    Calculadora c1(operando_1,operando_2);

    std::cout << "Digite a operacao desejada: " << endl;
    std::cout << "+ : Somar    (Operando 1 + Operando 2) " << endl;
    std::cout << "- : Subtrair    (Operando 1 - Operando 2) " << endl;
    std::cout << "* : Multiplicar    (Operando 1 * Operando 2) " << endl;
    std::cout << "/ : Dividir    (Operando 1 / Operando 2) " << endl;
    std::cout << "p ou P : Potencia    (Operando 1 elevado ao Operando 2) " << endl;
    std::cin >> operacao;


switch (operacao) {
  case '+':
    cout << "Operacao: Somar \n";
    cout << operando_1 << " + " << operando_2 << " = " << c1.SomarNumeros();
    break;
    case '-':
    cout << "Operacao: Subtrair \n";
    cout << operando_1 << " - " << operando_2 << " = " << c1.SubtrairNumeros();
    break;
    case '*':
    cout << "Operacao: Multiplicar \n";
    cout << operando_1 << " * " << operando_2 << " = " << c1.MultiplicarNumeros();
    break;
    case '/':
    cout << "Operacao: Dividir \n";
    cout << operando_1 << " / " << operando_2 << " = " << c1.DividirNumeros();
    break;
    case 'p':
    cout << "Operacao: Potencia \n";
    cout << operando_1 << " Elevado a " << operando_2 << " = " << c1.PotenciaNumeros();
    break;
    case 'P':
    cout << "Operacao: Potencia \n";
    cout << operando_1 << " Elevado a " << operando_2 << " = " << c1.PotenciaNumeros();
    break;

  default:
    cout << "Operacao Invalida";
}
cout << "\n\nDeseja Fazer um novo Calculo? s para Sim n para Nao\n";
cin >> desejaContinuar;


}
while(desejaContinuar == 's' || desejaContinuar == 'S');

cout << "\nSoftware Finalizado!!!\n";




    return 0;
}
