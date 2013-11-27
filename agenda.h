/* TAD AGENDA */

#include <iostream>
#include "contato.h"


using namespace std;

typedef struct{
	Contato posicao[20];
}Agenda;

// prototipos

void inicializarAgenda(Agenda&, Contato&);

int incluirContato(Agenda&, Contato, int);

int removerContato(Agenda&, Contato, int);

void imprimirAgenda(Agenda&, int);

Contato buscaContato(Agenda&, string);

void ordenaAgenda(Agenda&);
