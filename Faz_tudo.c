#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 2

typedef struct aluno{
char nome[30];
float nota1, nota2;
struct aluno*prox;
}ALUNOPTR;

ALUNOPTR *getnodo()
{
    ALUNOPTR *p;
    p=(ALUNOPTR*)malloc(sizeof(struct aluno));
    return (p);
}


ALUNOPTR *insere(ALUNOPTR *p, char x)
{
   ALUNOPTR *q,*ant,*prim;
   prim=p;
   q=getnodo();
   q->nome[30]=x;
   if(q->nome<p->nome)
   {
      q->prox=p;
     p=q;
     return p;
   }
   while((p!=NULL)&&(q->nome>=p->nome))
   {
      ant=p;
  p=p->prox;  
   }
   // se antes do final, o valor for menor, insere neste local
   if((p!=NULL)&&(q->nome<p->nome))
    {
       p=ant;
  q->prox=p->prox;
  p->prox=q;
  return prim;
}
   if((p==NULL)&&(q->nome>=ant->nome))
    //se chegar no final e o valor a inserir ainda for maior do que o último, insere o último
    {
       q->prox=p;
  p=ant;
       p->prox=q;
       return prim;
    }    
}

//----------------------------------------------------------------------------------------------------------






main()
{
setlocale(LC_ALL,"");
ALUNOPTR contato[N], aux;
int i, j, cont=0;
FILE *pont_arq; // cria variável ponteiro para o arquivo
char nome[20],menu[3],final[2]; // string que vai aramazenar uma palavra
float nota1, nota2,media;
    menu:
    printf("\nESCOLHA:\n [1] - INSERIR ALUNO E NOTAS \n [2] - EXIBIR ALUNOS E MÉDIAS \n [3] - EXIBIR ALUNOS APROVADOS \n [4] - EXIBIR ALUNOS REPROVADOS  \n [5] - EXCLUIR ALUNO \n [6] - SALVAR DADOS EM DISCO\n\n  ");
gets(menu);

if(menu[0]=='1')
{
//abrindo o arquivo com tipo de abertura w (escrita)
pont_arq = fopen("teste.txt", "a");
    //testando se o arquivo foi realmente criado
    if(pont_arq == NULL)
    {
    printf("Erro na abertura do arquivo!");
    return 1;
    }
//INSERIR ALUNOS E NOTAS

for(i=0;i<1;i++)
{
printf("ENTRE COM AS INFORMAÇÕES DO ALUNO(A)\n");
printf("Nome........: "); gets(contato[cont].nome);
printf("Nota 1......: "); scanf("%f", &contato[cont].nota1);
printf("Nota 2......: "); scanf("%f", &contato[cont].nota2);
getchar();

//ainda n sei como coloca em ordem e regrava no arquivokk
/*
for(i=0;i<cont;i++)
    for(j=i+1;j<cont;j++)
        {
          if(strcmp(contato[i].nome,contato[j].nome)>0)
          {
          strcpy(aux.nome,contato[i].nome);
          strcpy(contato[i].nome,contato[j].nome);
strcpy(contato[j].nome,aux.nome);

aux.nota1=contato[i].nota1;
          contato[i].nota1=contato[j].nota1;
contato[j].nota1=aux.nota1;

aux.nota2=contato[i].nota2;
          contato[i].nota2=contato[j].nota2;
contato[j].nota2=aux.nota2;
}
        }*/
       
media=(contato[cont].nota1+contato[cont].nota2)/2.0;
   
//usando fprintf para armazenar a string no arquivo
  fprintf(pont_arq, "Aluno(a): %s\n", contato[cont].nome);
    fprintf(pont_arq, "Media: %.2f\n\n", media);
}

//usando fclose para fechar o arquivo
    fclose(pont_arq);
    printf("Dados gravados com sucesso!");

cont++;

//voltar ao menu ou encerrar programa  
en1:
printf("\n\n|-Digite [1] para ir ao menu ou [0] para encerrar o programa-|\n  "); gets(final);
if(final[0] == '1')
{
goto menu;
}
if(final[0] == '0')
{
return 0;
}
if(final[0] != '1' || final[0] != '0')
{
printf("OPÇÃO INVÁLIDA!!!\nESCOLHA NOVAMENTE!\n");
goto en1;
}
}


else if(menu[0]=='2')
{
//abrindo o arquivo com tipo de abertura r (escrita)
pont_arq = fopen("teste.txt", "r");

//EXIBIR ALUNOS E MEDIAS
while(fgets(nome, 20, pont_arq) != NULL)
printf("%s\n", nome);

//usando fclose para fechar o arquivo
    fclose(pont_arq);

//voltar ao menu ou encerrar programa  
en2:
printf("\n\n|-Digite [1] para ir ao menu ou [0] para encerrar o programa-|\n  "); gets(final);
if(final[0] == '1')
{
goto menu;
}
if(final[0] == '0')
{
return 0;
}

if(final[0] != '1' || final[0] != '0')
{
printf("OPÇÃO INVÁLIDA!!!\nESCOLHA NOVAMENTE!\n");
goto en2;
}
}


else if(menu[0]=='3'){

for(i=0;i<N;i++){

media=(contato[i].nota1+contato[i].nota2)/2.0;
if(media>=7){
printf("NOME DO ALUNO: %s\n", contato[i].nome);
printf("MÉDIA: %.2f\n",media);
printf("\n  ALUNO APROVADO!!\n\n");
}
else {
printf("NENHUM ALUNO APROVADO!");
}
}

}

else if(menu[0] == '4') {
for(i=0;i<N;i++){

media=(contato[i].nota1+contato[i].nota2)/2.0;
if(media<7){
printf("NOME DO ALUNO: %s\n", contato[i].nome);
printf("MÉDIA: %.2f\n",media);
printf("\n  ALUNO REPROVADO!!\n");
}
else {
printf("NENHUM ALUNO REPROVADO!");
}
}
}

else if(menu[0] == '6') {
/*pont_arq = fopen("teste.txt", "r");
//EXIBIR ALUNOS E MEDIAS
while(fgets(nome, 20, pont_arq) != NULL)
printf("%s\n", nome);
fclose(pont_arq);*/
}

//voltar ao menu ou encerrar programa  
en3:
printf("\n\n|-Digite [1] para ir ao menu ou [0] para encerrar o programa-|\n  "); gets(final);
if(final[0] == '1')
{
goto menu;
}
if(final[0] == '0')
{
return 0;
}

if(final[0] != '1' || final[0] != '0')
{
printf("OPÇÃO INVÁLIDA!!!\nESCOLHA NOVAMENTE!\n");
goto en3;
}
}
