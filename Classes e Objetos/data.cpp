#include <iostream>
#include <string>

/*
Aluno: Djhonathan Paiva
GRR: 20182753
TE353 - Programação Orientada a Objetos
Compilando no VSCode  - Tecla F6
Compilando no DEV-C++ - Tecla F11
*/

using namespace std;
class Nascimento{
private:
    int Dia, Mes, Ano;
    string nomeMes, signo;
    
public:
    bool verificaData();
    bool bissexto();
    void pegaData();
    void nomeiaMes();
    void defineSigno();
    void imprimeExtenso();
};

bool Nascimento::bissexto(){
	if ((Ano%4==0 && Ano%100!=0)||Ano%400==0)
		return 1;
	else
		return 0;
}

bool  Nascimento::verificaData(){    /* validação da data digitada */
    if((Dia>31||Dia<1/*||Dia == 0*/)||(Mes>12||Mes<1)||(Ano<0||Ano>2020)){	//! manutenção
		cout << "Data invalida. Tente novamente!" << endl;
		return 0;
	}
	else if((Mes==2||Mes==4||Mes==6||Mes==9||Mes==11)&&Dia==31){    // para meses que têm 30 dias ou menos.
        cout << "Data invalida. Tente novamente!" << endl;
        return 0;
    }
	else if(Mes==2&&Dia==30){   // para nascidos em fevereiro, já que não há possibilidade de ter 30 dias.
        cout << "Data invalida. Tente novamente!" << endl;
        return 0;
	}
	else if(Mes==2&&Dia==29&&(Nascimento::bissexto()==0)){ // comprova se o ano é bissexto.
        cout << "Data invalida. Tente novamente!" << endl;
        return 0;
	}
	else
        return 1;	
}

void Nascimento::pegaData(){
    do{
        cout << "Digite a data de nascimento no formato dd/mm/aaaa" <<endl;
        cout << "Digite o dia: " << endl;
        cin >> Dia; // cin >> data;
        cout << "Digite o mes: " << endl;
        cin >> Mes;
        cout << "Digite o ano: " << endl;
        cin >> Ano;
    }while(verificaData()!=1);
    cout << "\n\tA data digitada: " << Dia << "/" << Mes << "/" << Ano;
    }


void Nascimento::nomeiaMes(){
	if(Mes==1)
		nomeMes="Janeiro";
	if(Mes==2)
		nomeMes="Fevereiro";
	if(Mes==3)
		nomeMes="Marco";
	if(Mes==4)
		nomeMes="Abril";
	if(Mes==5)
		nomeMes="Maio";
	if(Mes==6)
		nomeMes="Junho";
	if(Mes==7)
		nomeMes="Julho";
	if(Mes==8)
		nomeMes="Agosto";
	if(Mes==9)
		nomeMes="Setembro";
	if(Mes==10)
		nomeMes="Outubro";
	if(Mes==11)
		nomeMes="Novembro";
	if(Mes==12)
		nomeMes="Dezembro";
}

void Nascimento::defineSigno(){	// alguns signos podem variar 1 dia dependendo do ano, pelo que pesquisei.
    if((Mes==3&&Dia>=21)||(Mes==4&&Dia<=20))
		signo="Aries";
	if((Mes==4&&Dia>=21)||(Mes==5&&Dia<=21))
		signo="Touro";
	if((Mes==5&&Dia>=22)||(Mes==6&&Dia<=21))
		signo="Gemeos";
	if((Mes==6&&Dia>=22)||(Mes==7&&Dia<=23))
		signo="Cancer";
	if((Mes==7&&Dia>=24)||(Mes==8&&Dia<=23))
		signo="Leao";
	if((Mes==8&&Dia>=24)||(Mes==9&&Dia<=21))
		signo="Virgem";
	if((Mes==9&&Dia>=22)||(Mes==10&&Dia<=23))
		signo="Libra";
	if((Mes==10&&Dia>=24)||(Mes==11&&Dia<=23))
		signo="Escorpiao";
	if((Mes==11&&Dia>=24)||(Mes==12&&Dia<=21))
		signo="Sagitario";
	if((Mes==12&&Dia>=22)||(Mes==1&&Dia<=20))
		signo="Capricornio";
	if((Mes==1&&Dia>=21)||(Mes==2&&Dia<=19))
		signo="Aquario";
	if((Mes==2&&Dia>=20)||(Mes==3&&Dia<=20))
		signo="Peixes";
}

void Nascimento::imprimeExtenso(){
	cout << "\n\t" << Dia << " de " << nomeMes << " de " << Ano << endl << "\tSigno: " << signo << endl;
	if(Nascimento::bissexto()==1)
		cout << "\tO ano e bissexto." << endl;
	if(Nascimento::bissexto()==0)
		cout << "\tO ano nao e bissexto." << endl;
}

int main(){
    
    Nascimento Pessoa;
    Pessoa.pegaData();
    Pessoa.nomeiaMes();
    Pessoa.defineSigno();
    Pessoa.imprimeExtenso();
    return 0;
}
