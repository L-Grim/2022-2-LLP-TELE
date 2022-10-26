#include <stdio.h>
#include <string.h>

struct infoAluno {    // Declaração da Estrutura. (infoAluno) 
	int matricula;    // Matricula. (Variavel int)
	char nome [50];   // Nome. (String) 
	float n1;         // 1º Nota parcial. (Variavel float)
	float n2;         // 2º Nota parcial. (Variavel float)
	float final;      // Nota final. (Variavel float)
	int faltas;       // Quantidades de faltas.
	char status;      // Status do aluno. (A -> Aprovado, N -> Reprovado Por nota,
};					  //  F -> Reprovado Por Falta.)


struct infoAluno arAluno[10], *pA;

// Mostra os elemento do Array
void mostraRegistro (arAluno, i)
	struct infoAluno arAluno[];
	int i;
	{
		printf("Informações do Aluno\n");
		printf("Matricula = %d\n", arAluno[i].matricula);
		printf("Nome = %s\n", arAluno[i].nome);
		printf("Nota Parcial-1 = %2.2f\n", arAluno[i].n1);
		printf("Nota Parcial-2 = %2.2f\n", arAluno[i].n2);
		printf("Nota Final = %2.2f\n", arAluno[i].final);
		printf("Faltas = %d\n", arAluno[i].faltas);
		printf("situação do Aluno = %c\n", arAluno[i].status);
	}

int main() {
	strcpy(arAluno[0].nome, "Gêmea má");
	arAluno[0].matricula = 300;
	arAluno[0].n1 = 8.3;
	arAluno[0].n2 = 9.2;
	arAluno[0].final = 8.5;
	arAluno[0].faltas = 2;
	arAluno[0].status = 'A';
	
	mostraRegistro(arAluno, 0);
	
	return 0;
}

