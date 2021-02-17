#include <iostream>
#include <vector>
using namespace std;

class Estoque
{
public:
    //classe geral    
};

class Produto   //clase principal
{
protected:
    int  qnt;
    float preco;
    string id, nome, especificacao;

public:
    Produto();
    void getData();
    void putData();
    vector<string> consultaRegistro(string, string);
    // void alteraRegistro(string);
    // void excluiRegistro();
};

class Componente : public Produto
{
protected:
    string valor_nominal;
    string potencia;

public:
    Componente();
    void getData();
    void putData();
};
