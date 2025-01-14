#ifndef VENDA_H
#define VENDA_H

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
    
        double Valor;
        std::string Descricao;
        Especialista especialista;
        Cliente cliente;

    public:

        Venda();
        Venda(Cliente *_cliente, Especialista *_especialista, 
              std::string descricao, double valor);

        void print();

        double getValor();

};

#endif
