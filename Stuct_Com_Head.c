#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef struct aluno {
	char al_nome[30], al_cpf[14];
	unsigned int al_dia: 5,
				 al_mes: 5,
				 al_ano: 11;
	struct aluno *al_proximo;
	// Ponteiro para uma estrutura aluno
} ALUNO;

// Elemento é sinonimo de struct aluno
typedef struct aluno ELEMENTO;
static ELEMENTO *head;

ELEMENTO *criar_elemento_lista() {
	ELEMENTO *p;
	
	p = (ELEMENTO *) malloc (sizeof(ELEMENTO));
	
	if (p == NULL) {
		printf("Criação de Elemento da Lista com Malloc Falhou.\n");
		exit(1);
	}
	
	p -> al_proximo = NULL;
	
	return (0);
}

void add_elemento(e)
ELEMENTO *e;
{
	ELEMENTO *p;
	
	if(head == NULL) {
		head = e;
		return;
	}
	
	for(p = head; p -> al_proximo != NULL; p = p -> al_proximo);
	p -> al_proximo = e;
}

static ELEMENTO *head;

int main() {
	int j = 0;
	ELEMENTO *ptr;
	for (j = 0; j < 10; ++j) {
		ptr = criar_elemento_lista();
		strcpy(ptr -> al_nome, "jose");
		strcpy(ptr -> al_cpf, "12345678900");
		ptr -> al_ano = 2022;
		ptr -> al_mes = 9;
		ptr -> al_dia = 04;
		add_elemento(ptr);
	}
	return 0;
}
