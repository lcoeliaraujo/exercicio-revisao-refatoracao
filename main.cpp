#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <vector>

int main() {
  std::vector <Empregado *> empregados;
  std::vector <double> pagEmpregados;
  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setProjetos(3);
  eng1.setHorasTrabalhadas(9.5);
  empregados.push_back(&eng1);

  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setProjetos(1); 
  eng2.setHorasTrabalhadas(8); 
  empregados.push_back(&eng2);
  
  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setProjetos(2); 
  eng3.setHorasTrabalhadas(8);
  empregados.push_back(&eng3);  
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(5000);
  vend1.setHorasTrabalhadas(6); 
  empregados.push_back(&vend1);
    
  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  vend2.setHorasTrabalhadas(8); 
  empregados.push_back(&vend2);
	
  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  vend3.setHorasTrabalhadas(8);
  empregados.push_back(&vend3);

  for (int indice=0;indice<empregados.size();indice++)
    empregados[indice]->print();
  
  return 0;	
}
