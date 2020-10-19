#ifndef EMPREGADO_HPP
#define EMPREGADO_HPP

#include <iostream>
#include <string>

class Empregado{
  double salarioHora;
  double quotaMensalVendas;
  double horasTrabalhadas;

public:
  double getSalarioHora() { return salarioHora; };
  double getQuotaMensalVendas() { return quotaMensalVendas; };
  double getHorasTrabalhadas() { return horasTrabalhadas; };
  void setSalarioHora(double entrada) { salarioHora = entrada; };
  void setQuotaMensalVendas(double entrada) { quotaMensalVendas = entrada; };
  void setHorasTrabalhadas(double entrada) { horasTrabalhadas = entrada; };
  double pagamentoMes(){
    double t = horasTrabalhadas;
    if (horasTrabalhadas > 8)
      t += (horasTrabalhadas - 8) / 2;
    return t * salarioHora;
  }
  virtual void print() = 0;
};

#endif