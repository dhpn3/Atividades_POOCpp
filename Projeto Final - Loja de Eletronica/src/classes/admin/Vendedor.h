/*LOJA DE ELETR�NICA (TRABALHO FINAL)

DJHONATHAN HENRIQUE PAIVA DO NASCIMENTO
F�BIO GON�ALVES DE OLIVEIRA
FABR�CIO ALVES SANTANA
MARCOS VIN�CIUS GANDRA DE SOUZA
MARIANA KAWATA CLEMENTE*/


class Vendedor
{
	protected:
		int id; //Refere-se ao n�mero de identifica��o do funcion�rio
		char nome[36]; //Refere-se ao nome do funcion�rio
		
	public:
		Vendedor(); //Construtor sem argumentos
		Vendedor(int i,char nm[]); //Construtor que receber� os dados fornecidos pelo usu�rio
		void CriaCSV(); //Cria arquivo CSV para vendedores
		void getdata(); //Recebe os dados do vendedor fornecidos pelo usu�rio
		void putdata(); //Imprime os dados dos vendedores
};
