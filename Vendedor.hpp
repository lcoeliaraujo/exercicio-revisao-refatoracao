#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado{
	std::string nome;
public:
	std::string getNome() { return nome; };
	void setNome(std::string entrada) { nome = entrada; };
	double quotaTotalAnual() { return getQuotaMensalVendas() * 12; };
	void print(){
		std::cout << "Nome: " << getNome() << std::endl;
		std::cout << "Salario Mes: " << pagamentoMes() << std::endl;
		std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
		std::cout << std::endl;
	};
};
