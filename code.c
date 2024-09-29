#include "remove.h"
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    char mensagem[101]; 
    char hexa[3];
    int  a, b, c, d, verificacao, x = 1;
    char continua; 
    char fim[] = "00";
    long int resultado;
    char mensagem_decodificada[c][101];
    do {
        
        printf("quantidade de mensagens para decodigicar: ");
        scanf("%d", &c);
        for(d=0;d<c;d++){
            
            printf("\nColoque valor de b: ");
            scanf("%d", &b);
            
            printf("coloque a mensagem hexadecimal: ");
            scanf("%100s", mensagem);
          
            int indice = 0;
            for(a = 0; a < strlen(mensagem); a += 2) {
                x = a / 2 + 1; 
                verificacao = func_val(x, b);
                if(verificacao != 0) {
                    
                    hexa[0] = mensagem[a];
                    hexa[1] = mensagem[a + 1];
                    hexa[2] = '\0';
                    
                    if(strcmp(hexa, fim) == 0) {
                        break;
                    }
                    resultado = strtol(hexa, NULL, 16);
                    mensagem_decodificada[d][indice++] = (char) resultado;
                }
            }
            mensagem_decodificada[d][indice] = '\0';
        
        }
         system("cls"); 

        for(d=0;d<c;d++){
            printf("%s\n", mensagem_decodificada[d]);
        }
        printf("\nVoce quer decodificar mais alguma mensagem (s/n): ");
        scanf(" %c", &continua);

     } while(continua == 's' || continua == 'S');

    return 0;
}
