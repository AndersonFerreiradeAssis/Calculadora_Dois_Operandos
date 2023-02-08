#include <iostream>
#include <math.h>
#include"calculadora.hpp"

Calculadora::Calculadora(double operando_1, double operando_2):
    _operando_1(operando_1), _operando_2(operando_2)
    {
        std::cout<<"Operacoes com os numeros digitados \n";
    }

    double Calculadora::SomarNumeros()
    {
        return _operando_1 + _operando_2;
    }
    double Calculadora::SubtrairNumeros()
    {
        return _operando_1 - _operando_2;
    }
    double Calculadora::MultiplicarNumeros()
    {
        return _operando_1 * _operando_2;
    }
    double Calculadora::DividirNumeros()
    {
        return _operando_1 / _operando_2;
    }
    double Calculadora::PotenciaNumeros()
    {
        return pow(_operando_1, _operando_2);
    }





