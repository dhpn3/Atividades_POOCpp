#include <iostream>
#include <string>
#include <stdlib.h>
#include "classe.h"
using namespace std;

	Motor::Motor(){
		NumCilindro = 0;
		Potencia = 0;
	}

	Motor::Motor(int NumCilindro, int Potencia){
		this->NumCilindro = NumCilindro;
		this->Potencia = Potencia;
	}

	void Motor::getdata(){
		cout<<"\n\tDigite as caracteristicas do motor: "<<endl;
		cout<<"Cilindrada/Numero de Cilindros: ";
		cin>>NumCilindro;
		cout<<"\nPotencia do motor: ";
		cin>>Potencia;
	}

	void Motor::putdata(){
		cout<<"\nCilindrada/Numero de Cilindros: " << NumCilindro << " Cilindradas" << endl;
		cout<<"Potencia do motor: "<<Potencia << " CV" << endl;
		cout<<"\n";
	}
	
	Veiculo::Veiculo(){
		Peso = 0;
		VelocMax = 0;
		Preco = 0.0;
	}

	Veiculo::Veiculo(int Peso, int VelocMax, float Preco){
		this->Peso = Peso;
		this->VelocMax = VelocMax;
		this->Preco = Preco;
	}

	void Veiculo::getdata(){
		cout<<"\n\tDigite as caracteristicas do veiculo: "<<endl;
		cout<<"Peso (kg): ";
		cin>>Peso;	// getline(cin, Peso);
		cout<<"\nVelocidade maxima limitada (km/h): ";
		cin>>VelocMax;
		cout<<"\nPreco (R$): ";
		cin>>Preco;
	}

	void Veiculo::putdata(){
		cout<<"Peso do veiculo: " << Peso << " kg" << endl;
		cout<<"Velocidade maxima limitada do veiculo: "<< VelocMax << " km/h" << endl;
		cout<<"Preco do veiculo: "<< "R$ "<< Preco <<endl;
		cout<<"\n";
	}
	
	CarroPasseio::CarroPasseio() : Motor(), Veiculo(){	//sem argumentos
		Cor = "";
		Modelo = "";
	}

	CarroPasseio::CarroPasseio(int NumCilindro, int Potencia, int Peso, int VelocMax, float Preco, string Cor, string Modelo) : Motor(NumCilindro, Potencia), Veiculo(Peso, VelocMax, Preco){	//com argumentos
		this->Cor = Cor;
		this->Modelo = Modelo;
	}

	void CarroPasseio::getdata(){
		Motor::getdata();
		Veiculo::getdata();
		cout<<"\n\tDigite as caracteristicas que o carro de passeio deve ter: "<<endl;
		cout<<"Cor: ";
		// getline(cin, Cor);
		cin>> Cor;
		cout<<"Modelo: ";	//ex: Pálio, Ferrari, Fusca, Kombi, ou: Esportivo, SUV, Camionete.
		cin>> Modelo;
	}

	void CarroPasseio::putdata(){
		cout<<"\n\n\tImprimindo as caracteristicas do carro de passeio..."<<endl;
		Motor::putdata();
		Veiculo::putdata();
		cout<<"Cor do carro: " << Cor <<endl;
		cout<<"Modelo do carro: "<< Modelo <<endl;
		cout<<"\n";
	}
	
	Caminhao::Caminhao() : Motor(), Veiculo(){	//sem argumentos
		Toneladas = 0;
		AlturaMax = 0;
		Comprimento = 0;
	}

	Caminhao::Caminhao(int NumCilindro, int Potencia, int Peso, int VelocMax, float Preco, int Toneladas, int AlturaMax, int Comprimento) : Motor(NumCilindro, Potencia), Veiculo(Peso, VelocMax, Preco){	//com argumentos
		this->Toneladas = Toneladas;
		this->AlturaMax = AlturaMax;
		this->Comprimento = Comprimento;
	}

	void Caminhao::getdata(){
		Motor::getdata();
		Veiculo::getdata();
		cout<<"\n\tDigite as caracteristicas do caminhao: "<<endl;
		cout<<"Toneladas (Carga maxima suportada): ";
		cin>>Toneladas;
		cout<<"\nAltura maxima (metros): ";
		cin>>AlturaMax;
		cout<<"\nComprimento (metros): ";
		cin>>Comprimento;
	}

	void Caminhao::putdata(){
		cout<<"\n\tImprimindo as caracteristicas do caminhao..."<<endl;
		Motor::putdata();
		Veiculo::putdata();
		cout<<"Carga maxima: " << Toneladas << " t"<< endl;
		cout<<"Altura maxima: "<< AlturaMax <<" m"<< endl;
		cout<<"Comprimento: "<< Comprimento <<" m"<< endl;
		cout<<"\n";
	}
