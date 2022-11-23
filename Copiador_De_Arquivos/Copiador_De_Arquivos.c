#include <stdio.h>
#include <stddef.h>

#define FAIL 0
#define SUCCESS 1

int copyfile(infile, outfile)
    char *infile, *outfile; {
    FILE *fp1, *fp2;

    if (fp1 = fopen(infile, "rb") == NULL) {
        return FAIL;
    }
    if (fp2 = fopen(outfile, "wb") == NULL) {
        fclose(fp1);
        return FAIL;
    }

    while (!feof(fp1)) {
        putc(getc(fp1), fp2);
    
    fclose(fp1);
    fclose(fp2);
    return SUCCESS;
    }

}

int main() {
    int erro=0;
    
    erro = copyfile("Teste.txt", "Saida.txt");

    if (erro==0)
        printf("Copia de Arquivo Falhou!");
    else
        printf("Copia de Arquivo com sucesso!");

    return 0;
}