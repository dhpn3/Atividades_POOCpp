int main(){
    Componente componente;

    /* Menu de opcoes para COMPONENTE: Registrar, Consultar, Alterar, Exclur */
    int acao;
    cout << "\n";

    do
    {
        cout << "\n\t\t---Menu de Acoes---"<<endl;
        cout << "1. Registrar produtos\n" << "2. Visualizar produtos\n"
             << "3. Consultar produtos\n"   << "4. Alterar produtos\n" << "5. Excluir produtos\n"
             << "6. Sair"<<endl;
        cout << "\nEscolha o que deseja fazer: ";
        cin >> acao;

        switch (acao)
        {
        case 1: /*funcionando*/
            system("CLS");
            cout<<"Registrar produtos:"<<endl;
            componente.getData();   //registra um componente no arquivo CSV
            componente.putData();   //imprime o que ja tem no arquivo CSV
            break;

        case 2: /*funcionando*/
            system("CLS");
            cout<<"Visualizar produtos:\n"<<endl;
            componente.putData();
            cout<<"\n";
            break;

        case 3:{    /*funcionando*/
            system("CLS");
            cout<<"Consultando produtos..."<<endl;
            char opc = 's';

            while((opc == 's') or (opc == 'S')) {
                cout << "\n";
                string searchID;
                componente.putData();

                cout <<"\n\nDigite o ID do produto que queira consultar (ID valido): "; // no caso, produto = componente
                cin >> searchID;
                vector <string> dado = componente.consultaRegistro("estoqueTESTE.csv", searchID);
                //metodo para pesquisar informacao sobre um componente pelo seu ID 

                cout << "\n";
                cout << "NOME" << "\t" << "QUANTIDADE" << "\t" << "PRECO"
                     << "\t" << "VALOR NOMINAL" << "\t" << "POTENCIA" << "\t" << "ESPECIFICACAO" << endl;
                cout << dado[1] << "\t" << dado[2] << "\t" << dado[3]
                     << "\t" << dado[4] << "\t" << dado[5] << "\t" << dado[6];            

                cout << "\nConsultar um novo produto? [s/n]: ";
                cin >> opc;
                system("CLS");
            }
            /*para incluir o ID na impressao do componente consultado:
                cout << "ID" << "\t" << "NOME" << "\t" << "QUANTIDADE" << "\t" << "PRECO"
                     << "\t" << "VALOR NOMINAL" << "\t" << "POTENCIA" << "\t" << "ESPECIFICACAO" << endl;
                cout << registro[0] << " " << registro[1] << " " << registro[2] << " " << registro[3] << " " << registro[4] << " " << registro[5]
                     << " " << registro[6]; */
            break;
        }

        case 4:{
            system("CLS");
            string alteraID;
            cout<<"Alterando produtos:\n"<<endl;    /*indeterminado*/
            // componente.putData();

            // cout <<"\n\nDigite o ID do produto que queira alterar (ID valido): ";
            // cin >> alteraID;
            // componente.alteraRegistro(alteraID);
            // cout << "\nVisualizando alteracoes:"<<endl;
            // componente.putData();
            break;
        }
        case 5:
            system("CLS");
            cout<<"Excluindo produtos:"<<endl;  /*indeterminado*/
            break;     
        case 6:
            system("CLS");
            cout<<"Saindo..."<<endl;
            break;     
        default:
            system("CLS");
            cout<<"\nOpcao invalida! Tente novamente: ";
            break;
        }
    } while(acao != 6);
    

    /*Quando tiver outros produtos alem de Componentes, exemplo:
    ferramenta.getData();
    ferramenta.putData();
    ferramenta.consulta();
    EPI.getData();
    EPI.putData();
    EPI.consulta();
    */

    cout<<"\n";
    system("pause");
    return 0;
}