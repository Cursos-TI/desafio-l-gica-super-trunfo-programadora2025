#include <stdio.h>
    int main (){
        printf("Desafio Super Trunfo - Países.\n");
        printf("Comparação das Cartas\n");
        printf("\033[1mby Programadora2025\033[0m\n");
        
        float densidade1, densidade2;

    printf("digite a Densidade do Brasil: \n");
    scanf("%f", &densidade1);
    printf("digite a Densidade da Espanha: \n");
    scanf("%f", &densidade2);

    if(densidade1 > densidade2){
        printf("\033[44;33mO BRASIL venceu!\033[0m\n");
    } else {
        printf("\033[44;31mA ESPANHA venceu!\033[0m\n");
    }
   
 
        return 0;
    }

