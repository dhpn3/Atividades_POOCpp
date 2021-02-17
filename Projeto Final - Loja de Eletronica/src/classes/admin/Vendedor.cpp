/*LOJA DE ELETR�NICA (TRABALHO FINAL)

DJHONATHAN HENRIQUE PAIVA DO NASCIMENTO
F�BIO GON�ALVES DE OLIVEIRA
FABR�CIO ALVES SANTANA
MARCOS VIN�CIUS GANDRA DE SOUZA
MARIANA KAWATA CLEMENTE*/

#include "Vendedor.h"
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstdlib>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

Vendedor::Vendedor()
{
	id=0;
	nome[0]='\0';
}

Vendedor::Vendedor(int i,char nm[])
{
	id=i;
	strcpy(nome,nm);
}

void Vendedor::CriaCSV()
{
	int i=1;  //Refere-se ao n�mero de identifica��o do funcion�rio

	id=i;
	fstream fout;
	fout.open("Vendedor.csv",ios::out|ios::app); //Criando arquivo CSV
	fout<<"ID"<<";"<<"VENDEDOR"<<"\n";
	fout<<id++<<";"<<"Maria"<<"\n"; //Salvando dados iniciais (exemplos) no arquivo CSV
	fout<<id++<<";"<<"Miguel"<<"\n";
	fout<<id++<<";"<<"Rafael"<<"\n";
	fout<<id++<<";"<<"Pedro"<<"\n";
	fout<<id++<<";"<<"Gabriela"<<"\n";
	fout.close(); //Fechando arquivo CSV
};

void Vendedor::getdata()
{
	char nm[36]; //Refere-se ao nome do funcion�rio
	
	fstream fout;
	fout.open("Vendedor.csv",ios::out|ios::app); //Abrindo arquivo CSV
	cout<<"Digite o nome do vendedor:"<<endl; 
	cin.getline(nm,36);  //Recebendo dados do usu�rio para serem salvos no arquivo CSV
	strcpy(nome,nm);
	fout<<id++<<";"<<nome<<"\n";  //Salvando dados fornecidos pelo usu�rio no arquivo CSV
	fout.close(); //Fechando arquivo CSV
};

void Vendedor::putdata()
{
    string vendedor;
    
	fstream fout;
    fout.open("Vendedor.csv",ios::in); //Abrindo arquivo CSV
	cout<<"\n";
    if(fout.good())
	{
        while(getline(fout,vendedor,'\r'))
		{
            cout<<vendedor<<"\n";
        }
    }
    else{
        cout<<"NAO FOI POSSIVEL ABRIR O ARQUIVO!\n"<<endl;
    }
    fout.close(); //Fechando arquivo CSV
};


/*int main()
{
	Vendedor V(0,"vendedor");
	
	V.CriaCSV();
	V.getdata();
	V.putdata();
	
	getchar();
	return 0;
}*/
