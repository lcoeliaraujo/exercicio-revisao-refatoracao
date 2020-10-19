#ifndef EMPREGADO_HPP
#define EMPREGADO_HPP

#include <iostream>
#include <string>

class Empregado{
  double salarioHora;
  double quotaMensalVendas;
public:
  double getSalarioHora() { return salarioHora; };
  double getQuotaMensalVendas() { return quotaMensalVendas; };
  void setSalarioHora(double entrada) { salarioHora = entrada; };
  void setQuotaMensalVendas(double entrada) { quotaMensalVendas = entrada; };
  double pagamentoMes(double horasTrabalhadas){
    double t = horasTrabalhadas;
    if (horasTrabalhadas > 8)
      t += (horasTrabalhadas - 8) / 2;
    return t * salarioHora;
  }
  virtual void print(double) = 0;
};

#endif