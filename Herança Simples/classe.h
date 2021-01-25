#include <iostream>
#include <string>

#ifndef CLASSE_H
#define CLASSE_H

using namespace std;

class Empresa
{
protected:
    string nome;
    string cidade, estado, endereco, cep;
    string telefone;
        
public:
    Empresa();
    Empresa(string nome, string cidade, string estado, string endereco, string cep, string telefone);
    void getData();
    void putData();
};

class Restaurante : public Empresa
{
protected:
    string tipoComida;
    string precoPrato;
    
public:
    Restaurante();
    Restaurante(string nome, string cidade, string estado, string endereco, string cep, string telefone, string tipoComida, string precoPrato);
	void getData();
    void putData();
    ~Restaurante();
	};
	
#endif	// CLASSE_H
