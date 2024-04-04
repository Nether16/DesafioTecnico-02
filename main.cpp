#include <string>
#include <iostream>
using namespace std;


int main()
{
    float doacao;
    string nulo;
    int i;
    string nomes;
    int escolha;
    while(true){
        cout<<"Bem vindo a Casa de Apoio Beoulve, oque gostaria de fazer : \r\n[1] Apresentação dos nossos fundadores\r\n[2] Oque nos fazemos\r\n[3] Intenção do fundador principal \r\n[4] Doar"<<endl;
        cin >> escolha;
        switch(escolha){
            case(1):
            do{
            for(nomes = "Ramza";i < 4 ;i = i){
                    if (nomes == "Ramza"){
                        cout<<"Ramza Beoulve foi um guerreiro que lutou para livrar Ivalice das auracites(pedras poderosas que davam grande poder ao usuario), para acabar com a maldade e as guerras que elas causavam"<<endl;
                        cout<<"Digite Ovelia para continuar"<<endl;
                        cin >> nomes;
                        i++;
                    }
                    if (nomes == "Ovelia"){
                        cout<<" "<<endl;
                        cout<<"Ovelia Atkascha foi uma das princesas de Ivalice e ela foi usada como ferramenta pelos nobres que buscavam o poder das auracites, ate que ela foi resgatada por ramza e seus amigo, foi a maior apoiadora da Casa Beoulve"<<endl;
                        cout<<"Digite Mustadio para continuar"<<endl;
                        cin >> nomes;
                        i++;
                    }
                    if (nomes == "Mustadio"){
                        cout<<" "<<endl;
                        cout<<"Mustadio Bunansa foi um engenheiro incrivel para sua epoca ele criou a primeira pistola do mundo e com ela ele lutou ao lado de Ramza contra as auracites"<<endl;
                        cout<<"Digite Cid para continuar"<<endl;
                        cin >> nomes;
                        i++;
                    }
                    if (nomes == "Cid"){
                        cout<<" "<<endl;
                        cout<<"Cidolfus Orlandeau foi um conde e um dos guerreiros mais forte da sua epoca ele lutou ao lado de Ramza contra as auracites"<<endl;
                        cin >> nulo;
                        i++;
                    }
            }
            }while(i != 4);
            break;
            case(2):
                cout<<"Essa instituição tem o objetivo de arrecadar fundos para resgatar civis que estao no meio das guerras e leva-los para um lugar seguro (Tipo a Cruz vermelha e as Nações unidas)"<<endl;
                cin >> nulo;
            break;
            case(3):
                cout<<"Ramza foi o fundador principal da Casa de Apoio Beoulve ,no qual ele tinha o objetivo de diminuir os traumas que a guerra tras para os civis do pais em guerra"<<endl;
                cin >> nulo;
            break;
            case(4):
                cout<<"Insira o quantidade a ser doada"<<endl;
                cin >> doacao;
                cout<<"Insira o numero do cartão de credito"<<endl;
                cin >> nulo;
                cout<<"Insira a senha do cartão"<<endl;
                cin >> nulo;
                cout<<"Insira o codigo de segurança"<<endl;
                cin >> nulo;
                cout<<"Insira a data de validade"<<endl;
                cin >> nulo;
                cout<<"Insira seu CPF"<<endl;
                cin >> nulo;
                
                if(doacao < 10){
                   cout<<"Está doação talvez nao ajude muito , doe mais pense nas crianças"<<endl; 
                   cin >> nulo;
                }else if (doacao > 10 and doacao < 50){
                   cout<<"Sabemos que voce pode doar mais ,eu vi sua conta bancaria, doe mais"<<endl; 
                   cin >> nulo;
                }else{
                   cout<<"Esta doação da pro gasto"<<endl; 
                   cin >> nulo;
                }
            break;
        }
    }
}