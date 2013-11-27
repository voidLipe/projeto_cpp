#include <iostream>
//#include "Agenda.h"
#include "Contato.h"

using namespace std;

int alterarTelefone(Contato &c){
	inicio:
	int controle = 0;
	int retorno=0;
	int i;
	cout<<"######################################"<<endl;
	cout<<"#                                    #"<<endl;
	cout<<"#  [1] EDITAR UM TELEFONE            #"<<endl;
	cout<<"#  [2] ADICIONAR UM TELEFONE   		#"<<endl;
	cout<<"#  									#"<<endl;
	cout<<"# Digite um opção!					#"<<endl;
	cout<<"######################################"<<endl;
	cin>>controle;
	switch(controle){
		case 1:
			if(c.inalteravel==0){
				cout<<"Digite o indice do telefone a ser alterado: "<<endl;
				cin>>i;
				cout<<"Digite um novo telefone: "<<endl;
				cin>>c.telefone[i];	
				retorno=1;			
			}else{
				cout<<"O contato não pode ser alterado!"<<endl;
			}
			break;
		case 2:
			if(c.inalteravel==0){
			//	cout<<"
			}
			break;
		default:
			cout<<"Opcao invalida!";
			goto inicio;	
				
	}
}
