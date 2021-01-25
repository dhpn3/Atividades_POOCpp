#include <iostream>
#include <string>
#include "classe.h"

using namespace std;

 Empresa::Empresa(){ //sem argumentos
        this->nome = "";
        this->cidade = "";
        this->estado = "";
        this->endereco = "";
        this->cep = "";
        this->telefone = "";
    }

    Empresa::Empresa(string nome, string cidade, string estado, string endereco, string cep, string telefone){//com argumentos
        this->nome = nome;
        this->cidade = cidade;
        this->estado = estado;
        this->endereco = endereco;
        this->cep = cep;
        this->telefone = telefone;
    }

    void Empresa::getData(){ //pegar os dados da empresa
        cout<<"\tDigite os dados do seu empreendimento!"<<endl;
        cout<<"Nome: "<<endl;
    	getline(cin, nome);
        cout<<"\nCidade local: "<<endl;
    	getline(cin, cidade);
        cout<<"\nEstado: "<<endl;
    	getline(cin, estado);
        cout<<"\nEndereco: "<<endl;
    	getline(cin, endereco);
        cout<<"\nCEP: "<<endl;
    	getline(cin, cep);
    	cout<<"\nTelefone: "<<endl;
    	getline(cin, telefone);
    }

    void Empresa::putData(){ //printar os dados digitados da empresa
        cout<<"\n\tImprimindo dados da sua empresa..."<<endl;
        cout<<"Nome: "<< nome <<endl;
        cout<<"\nCidade local: "<< cidade << endl;
        cout<<"\nEstado: "<< estado <<endl;
        cout<<"\nEndereco: "<< endereco <<endl;
        cout<<"\nCEP: "<< cep <<endl;
        cout<<"\nTelefone: "<< telefone <<endl;
    }
    
    Restaurante::Restaurante() : Empresa(){
        tipoComida = "";
        precoPrato = "";
    }
	Restaurante::Restaurante(string nome, string cidade, string estado, string endereco, string cep, string telefone, string tipoComida, string precoPrato) : Empresa(nome, cidade, estado, endereco, cep, telefone){
	    this->tipoComida = tipoComida;
	    this->precoPrato = precoPrato;
	}

	void Restaurante::getData(){
        Empresa::getData();
        cout<<"\nDigite uma tipo de comida: ";
        getline(cin, tipoComida);
        cout<<"\nDigite um preco: ";
        getline(cin, precoPrato);
    }

    void Restaurante::putData(){
	    Empresa::putData();
	    cout<<"\nPrato criado para o cardapio: "<<tipoComida<<endl;
	    cout<<"\nPreco do prato: "<<precoPrato<<endl;
	}

    Restaurante::~Restaurante(){	//destrutor
	}
