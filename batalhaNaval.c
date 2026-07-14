#include <stdio.h>

int main(){
    printf("\n===Batalha Naval===\n");

    printf("\nTabuleiro Vazio: \n");

    int tabuleiro[10][10];
    
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    
    int linComecoNav1, colComecoNav1, linComecoNav2, colComecoNav2;
    char orientacaoNav1, orientacaoNav2;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j< 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n ");
    }
    
    printf("\nInforme em qual linha deseja posicionar o navio 1[1 a 10]: ");
    scanf("%d",&linComecoNav1);
    printf("\nInforme em qual coluna deseja posicionar o navio 1[1 a 10]: ");
    scanf("%d",&colComecoNav1);
    printf("Informe se o navio 1 estará na horizontal ou na vertical[H, V]: ");
    scanf(" %c",&orientacaoNav1);
    printf("\nInforme em qual linha deseja posicionar o navio 2: ");
    scanf("%d",&linComecoNav2);
    printf("\nInforme em qual coluna deseja posicionar o navio 2: ");
    scanf("%d",&colComecoNav2);
    printf("Informe se o navio 2 estará na horizontal ou na vertical: ");
    scanf(" %c",&orientacaoNav2);
    
    printf("\nPosicionando os navios no tabuleiro...\n");
    switch(orientacaoNav1){
        case 'H':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav1][colComecoNav1 + i] = navio1[i];
            }
            break;
        }
        case 'V':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav1 + i][colComecoNav1] = navio1[i];
            }
            break;
        }
    }
    switch(orientacaoNav2){
        case 'H':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav2][colComecoNav2 + i] = navio2[i];
            }
            break;
        }
        case 'V':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav2 + i][colComecoNav2] = navio2[i];
            }
            break;
        }
    }
    
    printf("\n\n");
    for(int i = 0; i < 10; i++){
        printf(" %c ", 'A'+i);
    }
    printf("\n\n\n");
    
    for(int i = 0; i < 10; i++){
        printf("%2d - ",i+1);
        
        for (int j = 0; j < 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n ");
    }
            
    return 0;
}
