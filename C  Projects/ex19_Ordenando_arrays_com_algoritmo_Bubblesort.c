#include <locale.h>
#define TAM 10

int main(){


    setlocale(LC_ALL, "");

    int numeros[TAM];
    int i, aux, contador;

    printf("Entre com dez numeros para preencher o array, e pressione Enter apos digitar cada um:\n");
    for(i = 0; i < TAM; i++){
    scanf("%d", &numeros[i]);

    }

    printf("Ordem atual dos itens no array:\n");

    for (i=0; i < TAM; i++){
        printf("%4d", numeros[i]);
    }

    // Algoritmo de ardenação Bubblesort
    for(contador = 1; contador < TAM; contador++) {
        for(i=0; i < TAM - 1; i++) {
            if(numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
    
    printf("\nElementos do array em ordem crescente:\n");

    for(i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    printf("\n");

    return 0;
}