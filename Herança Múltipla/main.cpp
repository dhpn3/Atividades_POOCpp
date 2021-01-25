#include <iostream>
#include <string>
#include <stdlib.h>
#include "classe.h"
using namespace std;

int main(){
	cout<<"Escolhendo um carro de passeio..."<<endl;
	CarroPasseio meuCarro;
	meuCarro.getdata();
	meuCarro.putdata();	

	cout<<"Escolhendo um caminhao..."<<endl;
	Caminhao meuCaminhao;
	meuCaminhao.getdata();
	meuCaminhao.putdata();
	
	cout<<"Fim de cadastro."<<endl;
	system("pause");
	return 0;
}
