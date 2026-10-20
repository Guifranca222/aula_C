#include <stdio.h>


int main()
{   
    int numero, contador;
    FILE *arquivo;
    
    printf("Digite o número da tabuada: \n");
    scanf("%d", &numero);
    
    arquivo = fopen("tabuada.txt", "w");

    
    if(arquivo == NULL){
        printf("Arquivo não foi criado. \n");
        return 1;
    }

    
    for(contador=1; contador<=10; contador++) {
        fprintf(arquivo, "%d * %d = %d \n", numero, contador, numero*contador);
    }

    
    fclose(arquivo);
    
    printf("Arquivo gravado \n");
    
    return 0;
}