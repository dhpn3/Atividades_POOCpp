#include <iostream>
#include "Admin.h"



using namespace std;

Admin::Admin(): Vendedor()
{
	senha[0] = '\0';
}

bool Admin::autenticar(){
    int i = 0;
    bool autenticado = 0;
    while(!autenticado && i != 3){
        system("CLS");
        string usuario = "", password = "";
        cout<<"Insira o usuario: ";
        cin>>usuario;
        cout<<"\nInsira a senha: ";
        cin>>password;
        if((senha == password) && (usuario == nome)){
            autenticado = 1;
        }
        else{
            cout << "\nsenha ou usuario incorreto\n";
        }
        i++;
    }
    return autenticado;
}

bool Admin::iniciarMenu() {
	int op = 0;
	if(autenticar()){
    do{
        switch(op){
        case 0:
            system("clear||cls");
            cout << "Entrou no Admin" << endl;
            cout << "1 - Cadastrar vendedores\n";
            cout << "2 - Visualizar vendedores\n";
            cout << "3 - Cadastrar produtos\n";
            cout << "4 - Visualizar produtos\n";
            cout << "5 - sair\n";
            cout << "Operacao: ";
            cin >> op;
            break;
        case 1:
            system("clear||cls");
            //getData();
            op = 0;
            break;
        case 2:
            system("clear||cls");
            putData();
            op = 0;
            break;
        case 3:

            break;
        case 4:
            break;
        case 5:
            break;
        }
    }while(op != 5);

	}
	return 0;
}



