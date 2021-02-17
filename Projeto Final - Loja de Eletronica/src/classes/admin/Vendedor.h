/*LOJA DE ELETRÔNICA (TRABALHO FINAL)

DJHONATHAN HENRIQUE PAIVA DO NASCIMENTO
FÁBIO GONÇALVES DE OLIVEIRA
FABRÍCIO ALVES SANTANA
MARCOS VINÍCIUS GANDRA DE SOUZA
MARIANA KAWATA CLEMENTE*/


class Vendedor
{
	protected:
		int id; //Refere-se ao número de identificação do funcionário
		char nome[36]; //Refere-se ao nome do funcionário
		
	public:
		Vendedor(); //Construtor sem argumentos
		Vendedor(int i,char nm[]); //Construtor que receberá os dados fornecidos pelo usuário
		void CriaCSV(); //Cria arquivo CSV para vendedores
		void getdata(); //Recebe os dados do vendedor fornecidos pelo usuário
		void putdata(); //Imprime os dados dos vendedores
};
