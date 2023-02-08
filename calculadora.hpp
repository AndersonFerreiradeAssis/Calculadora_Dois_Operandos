
#ifndef CALCULADORA
#define CALCULADORA

class Calculadora
{
public:
    Calculadora(double operando_1, double operando_2);

    double SomarNumeros();
    double SubtrairNumeros();
    double MultiplicarNumeros();
    double DividirNumeros();
    double PotenciaNumeros();

private:
    double _operando_1, _operando_2;

};

#endif
