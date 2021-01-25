#include <iostream>
#include <string>
using namespace std;

class Motor		// classe-m�e 1
{
protected:
	int NumCilindro;
	int Potencia;

public:
	Motor();
	Motor(int NumCilindro, int Potencia);
	void getdata();
	void putdata();
};

class Veiculo		// classe-m�e 20
{
protected:
	int Peso;		//*kg
	int VelocMax;	//*km/h
	float Preco;	//*R$

public:
	Veiculo();
	Veiculo(int Peso, int VelocMax, float Preco);
	void getdata();
	void putdata();
};

class CarroPasseio : public Motor, Veiculo	// 1� classe-filha herdada das duas classes-m�es
{
protected:
	string Cor;
	string Modelo;

public:
	CarroPasseio();
	CarroPasseio(int NumCilindro, int Potencia, int Peso, int VelocMax, float Preco, string Cor, string Modelo);
	void getdata();
	void putdata();
};

class Caminhao : public Motor, Veiculo	// 2� classe-filha herdada das mesmas duas classes-m�es que "CarroPasseio"
{
protected:
	int Toneladas;
	int AlturaMax;
	int Comprimento;

public:
	Caminhao();
	Caminhao(int NumCilindro, int Potencia, int Peso, int VelocMax, float Preco, int Toneladas, int AlturaMax, int Comprimento);
	void getdata();
	void putdata();
};
