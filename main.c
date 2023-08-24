#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void bubbleSort(char caracteres[5], int n) {
    int x, y;
   for (x = 0; x < 4; x++) {
        for (y = 0; y < 4 - x; y++) {
            if (caracteres[y] > caracteres[y + 1]) {
                
                char aux = caracteres[y];
                caracteres[y] = caracteres[y + 1];
                caracteres[y + 1] = aux;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "");
    
    char caracteres[5];
    int x;
    
    printf("Insira uma letra para cada posição do vetor:\n");
    for (x = 0; x < 5; x++) {
        printf("Posição %d: ", x + 1);
        scanf(" %c", &caracteres[x]);
    }
    
    bubbleSort(caracteres, 5);
    
    printf("Conjunto ordenado: ");
    for (x = 0; x < 5; x++) {
        printf("%c ", caracteres[x]);
    }
    
    return 0;
}







