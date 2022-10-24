#include <stdio.h>
#include <string.h>

struct infoAluno {    // Declara��o da Estrutura. (infoAluno) 
	int matricula;    // Matricula. (Variavel int)
	char nome [50];   // Nome. (String) 
	float n1;         // 1� Nota parcial. (Variavel float)
	float n2;         // 2� Nota parcial. (Variavel float)
	float final;      // Nota final. (Variavel float)
	int faltas;       // Quantidades de faltas.
	char status;      // Status do aluno. (A -> Aprovado, N -> Reprovado Por nota,
};					  //  F -> Reprovado Por Falta.)


int main() {
	// Formas de inicializar e modificar a Struct
	// 1� Aluno
	struct infoAluno s1 = {666, "Kaique Castelo Branco", 6.3, 4.5, 7.2, 16, ' '};
	//2� Aluno
	struct infoAluno s2;
	strcpy(s2.nome, "G�mea m�");
	s2.matricula = 300;
	s2.n1 = 8.3;
	s2.n2 = 9.2;
	s2.final = 8.5;
	s2.faltas = 2;
	s2.status = ' ';

	printf("Aluno s1\n");
	printf("Matricula = %d\n",s1.matricula);
	printf("Nome = %s\n", s1.nome);
	printf("N1 = %2.2f\n",s1.n1);
	printf("N2 = %2.2f\n",s1.n2);

	return 0;
}

