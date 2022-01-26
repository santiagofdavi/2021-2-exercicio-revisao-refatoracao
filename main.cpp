#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main(){

    // Inicialização dos dados dos clientes

    Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", 35690000);
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", 22061955);
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", 24051953);
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", 22111967);
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", 13061981);
    cliente5.print();


    // Inicialização dos dados dos especialistas

    Especialista e01 = Especialista("Peter Parker", 46, 27061975, 3000, "Fotografia");

    Especialista e02 = Especialista("Tony Stark", 56, 4041965, 1000, 
                                    "Consertos de equipamentos eletronicos");

    Especialista e03 = Especialista("Wanda Maximoff", 32, 16021989, 5000, 
                                    "Engenharia e Designer");


    // Inicialização dos dados do gerente

    Gerente g01 = Gerente("Nick Fury", 72, 21121948, 10000);


    // Inicialização das informações das vendas

    Venda v01 = Venda(&cliente1, &e01, "Fotos do Homem Aranha", 100);
    e01.addComissao(e01.calculaComissao(v01.getValor()));
    e01.novoAtendimento();

    Venda v02 = Venda(&cliente4, &e02, "Troca da tela do telefone", 100);
    e02.addComissao(e02.calculaComissao(v02.getValor()));
    e02.novoAtendimento();


    Venda v03 = Venda(&cliente2, &e01, "Fotos do novo planador", 150);
    e01.addComissao(e01.calculaComissao(v03.getValor()));
    e01.novoAtendimento();


    Venda v04 = Venda(&cliente1, &e02, "Recarga de cartucho", 10);
    e02.addComissao(e02.calculaComissao(v04.getValor()));
    e02.novoAtendimento();


    Venda v05 = Venda(&cliente4, &e03, "Reconstrucao de Predio", 10000);
    e03.addComissao(e02.calculaComissao(v05.getValor()));
    e03.novoAtendimento();


    Venda v06 = Venda(&cliente5, &e03, "Decoracao de Apartamento no Brooklyn", 3000);
    e03.addComissao(e02.calculaComissao(v06.getValor()));
    e03.novoAtendimento();


    Venda v07 = Venda(&cliente1, &e03, "Reforma do Clarim Diario", 5000);
    e03.addComissao(e02.calculaComissao(v07.getValor()));
    e03.novoAtendimento();


    Venda v08 = Venda(&cliente3, &e02, "Formatacao do PC", 80);
    e02.addComissao(e02.calculaComissao(v08.getValor()));
    e02.novoAtendimento();


    // Impressão do relatório de vendas

    std::cout << " \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v07.print();

    v08.print();


    // Impressão do relatório de funcionários

    std::cout << " \n \n           Relatorio dos Funcionarios \n" << std::endl;

    e01.print();

    e02.print();

    e03.print();


    // Impressão do relatório do gerente

    int numTotalServicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() 
                           + e03.getNumAtendimentos();

    g01.addBonificacao(g01.calculaBonificacaoGerente(numTotalServicos));
    g01.print();

    return 0;
}
