/* IMPLEMENTACAO DAS OPERACOES DA AGENDA */
#include <iostream>
#include <cstring>
#include "Agenda.h"

using namespace std;

void inicializarAgenda(Agenda &a, Contato &c){
	a.posicao[0]=c;
}

int incluirContato(Agenda &a, Contato c,int posicao, int tam){
	if(posicao<tam && posicao>=0){
		a.posicao[posicao]=c;
		return 1;
	}	
	cout<<"Posicao invalida!"<<endl;
	return 0;	
}

//int removerContato(Agenda &a, Contato c.nome, int tam){
	
//}

void imprimirAgenda(Agenda &a, int tam){
	for(int i=0;i<tam;i++){
		cout<<"Nome: "<<a.posicao[i].nome<<endl;
		for(int j=0;j<3;j++){
			cout<<"Telefone: "<<a.posicao[i].telefone[j]<<endl;
		}
		for(int k=0;k<2;k++){
			cout<<"Email: "<<a.posicao[i].email[k]<<endl;
		}
		cout<<"\n";
	}
}


Contato buscaContato(Agenda &a, string str){ //busca sequencial
	for(int i=0;i<20;i++){
		if(a.posicao[i].nome==str){
			return a.posicao[i];
		}
	}
}


void ordenaAgenda(Agenda &a){
	Contato aux;
	for(int i=0;i<20;i++){
		for(int j=i+1;j<20;j++){
			if(strcmp(a.posicao[i].nome,a.posicao[j].nome)>0){
				aux=a.posicao[i];
				a.posicao[i]=a.posicao[j];
				a.posicao[j]=aux;
				//strcpy(aux,a.posicao[i]);
				//strcpy(a.posicao[i],a.posicao[j]);
				//strcpy(a.posicao[j],aux);
			}
		}
	}
	
}

