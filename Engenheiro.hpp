#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{
  std::string nome;
  int projetos;
public:
  std::string getNome() { return nome; };
  int getProjetos() { return projetos; };
  void setNome(std::string entrada) { nome = entrada; };
  void setProjetos(int entrada) { projetos = entrada; };
  void print(double pagamento){
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(pagamento) << std::endl;
    std::cout << "Projetos: " << getProjetos() << std::endl;
    std::cout << std::endl;
  };
};
