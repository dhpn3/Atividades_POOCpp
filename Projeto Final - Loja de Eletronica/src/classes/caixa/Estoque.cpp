#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <conio.h>
#include "Estoque.h"
using namespace std;

/*
ofstream - saída de dados - gravação num arquivo
ifstream - entrada de dados - leitura de arquivo
fstream - entrada e saída de dados - leitura e gravação
*/

Produto::Produto(){
    id = "";    //id = 000; para int
    qnt = 000;
    preco = 000.00;
    nome = ""; 
    especificacao = "";    
}

void Produto::getData(){
    fstream arquivoW;

    /*parte de gravacao de texto*/
    arquivoW.open("estoque.csv", ios::out | ios::app);

    cout << "Digite o id do produto: ";
    cin >> id;
    arquivoW << id << ";";
    cout << "Digite o nome do produto: ";
    cin >> nome;
    arquivoW << nome << ";";
    cout << "Digite a quantidade do produto no estoque: ";
    cin >> qnt;
    arquivoW << qnt << ";";
    cout << "Digite o preco do produto: ";
    cin >> preco;
    arquivoW << preco << ";";
    cout << "Digite a especificacao do produto: ";
    cin >> especificacao;
    arquivoW << especificacao << ";" << endl;
}

void Produto::putData(){
    fstream arquivoR;
    string linha;
    
    arquivoR.open("estoque.csv", ios::in); // parte de leitura de arquivo

    if(arquivoR.good()){
        while(getline(arquivoR, linha, ';')){
            cout << linha << ", ";  // ", " para deixar impressao "organizada". Ao inves, pode ser tambem uma barra de espaco apenas
        }
    }
    else{
        cout<<"Nao foi possivel abrir o arquivo." << endl;
    }    
}

/* void Produto::alteraRegistro(string _id){
		vector<string> Produto::consultaRegistro(string nome_arq, string _id){
	    vector<string> registro;
	    ifstream arquivo;
	    arquivo.open(nome_arq);
	
	    bool encontra_registro = false;
	
	    string campo_id, campo_nome, campo_qnt, campo_preco, campo_valornominal,
	    campo_potencia, campo_especif;
	
	    while( getline(arquivo, campo_id, ';') && !encontra_registro){
	        
	        getline(arquivo, campo_nome, ';');
	        getline(arquivo, campo_qnt, ';');
	        getline(arquivo, campo_preco, ';');
	        getline(arquivo, campo_valornominal, ';');
	        getline(arquivo, campo_potencia, ';');
	        getline(arquivo, campo_especif, '\n');
	
	        if(campo_id == _id){
	            encontra_registro = true;
	            registro.push_back(campo_id);
	            registro.push_back(campo_nome);
	            registro.push_back(campo_qnt);
	            registro.push_back(campo_preco);
	            registro.push_back(campo_valornominal);
	            registro.push_back(campo_potencia);
	            registro.push_back(campo_especif);
	        }
	    }
	    arquivo.close();
	    return registro;
	}


    Componente c1;
    fstream arquivo;
    vector<string> altera;
    arquivo.open("estoqueTESTE.csv", ios::in | ios::out | ios:: binary);
    bool encontra_altera = false;
    string campo_id, campo_nome, campo_qnt, campo_preco, campo_valornominal,
    campo_potencia, campo_especif;
    string idUP, nomeUP, qntUP, precoUP, valornominalUP, potenciaUP, especifUP;
    while( getline(arquivo, campo_id, ';') && !encontra_altera){
        
        getline(arquivo, campo_nome, ';');
        getline(arquivo, campo_qnt, ';');
        getline(arquivo, campo_preco, ';');
        getline(arquivo, campo_valornominal, ';');
        getline(arquivo, campo_potencia, ';');
        getline(arquivo, campo_especif, '\n');
        if(campo_id == _id){
            encontra_altera = true;
            altera.push_back(campo_id);
            altera.push_back(campo_nome);
            altera.push_back(campo_qnt);
            altera.push_back(campo_preco);
            altera.push_back(campo_valornominal);
            altera.push_back(campo_potencia);
            altera.push_back(campo_especif);
        }
        cout << "Digite o novo id do produto: ";
        cin >> idUP;
        altera[0] = idUP;
        cout << "aaaa";
        arquivo << altera[0] << ";";
        cout << "Digite o novo nome do produto: ";
        cin >> nomeUP;
        altera[1] = nomeUP;
        arquivo << altera[1] << ";";
        cout << "Digite a nova quantidade do produto no estoque: ";
        cin >> qntUP;
        altera[2] = qntUP;
        arquivo << altera[2] << ";";
        cout << "Digite o novo preco do produto: ";
        cin >> precoUP;
        altera[3] = precoUP;
        arquivo << altera[3] << ";";
        
        cout << "Digite a nova especificacao do produto: ";
        cin >> especifUP;
        altera[4] = especifUP;
        arquivo << altera[4] << ";" << endl;
        
        cout << "Digite o valor nominal do componente: ";
        cin >> valornominalUP;
        altera[5] = valornominalUP;
        arquivo << altera[5] << ";";
        cout << "Digite a potencia do componente: ";
        cin >> potenciaUP;
        altera[6] = potenciaUP;
        arquivo << altera[6] << ";";
    }
    arquivo.close(); 
}*/

/*void excluiRegistro(){
}*/

Componente::Componente() : Produto(){
    valor_nominal = " ";
    potencia = " ";
}

void Componente::getData(){
    char opc = 's';
    fstream arquivoW;   //checar abertura e fechamento do arquivo entre a heranca do metodo.
    cout<<"Registando um componente eletronico"<<endl;

    arquivoW.open("estoqueTESTE.csv", ios::out | ios::app);

    while((opc == 's') or (opc == 'S')){
        Produto::getData();
        cout << "Digite o valor nominal do componente: ";
        cin >> valor_nominal;
        arquivoW << valor_nominal << ";";
        cout << "Digite a potencia do componente: ";
        cin >> potencia;
        arquivoW << potencia << ";";

        cout << "\nDigitar um novo componente? [s/n]: ";
        cin >> opc;
        system("CLS");
    }
    arquivoW.close();   //fecha o arquivo de gravacao
}

void Componente::putData(){
    Produto::putData();
}
