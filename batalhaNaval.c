#include <stdio.h>

int main(){
    printf("\n===Batalha Naval===\n");

    printf("\nTabuleiro Vazio: \n");

    int tabuleiro[10][10];
    
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int navio3[3] = {3,3,3};
    int navio4[3] = {3,3,3};
    
    int linComecoNav1, colComecoNav1, linComecoNav2, colComecoNav2,linComecoNav3, colComecoNav3, linComecoNav4, colComecoNav4;
    char orientacaoNav1, orientacaoNav2, orientacaoNav3, orientacaoNav4;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    printf("\n");
    printf("\n---Batlha Naval---\n");

    printf("\nTabuleiro Vazio: \n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j< 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n ");
    }

    printf("\nVamos posicionar 4 navios no tabuleiro!\n");

    
    
    printf("\nInforme em qual linha deseja posicionar o navio 1[1 a 10]: ");
    scanf("%d",&linComecoNav1);
    printf("\nInforme em qual coluna deseja posicionar o navio 1[1 a 10]: ");
    scanf("%d",&colComecoNav1);
    printf("Informe se o navio 1 estará na diagnoal, horizontal ou na vertical[H, V]: ");
    scanf(" %c",&orientacaoNav1);

    printf("\n");

    printf("\nInforme em qual linha deseja posicionar o navio 2: ");
    scanf("%d",&linComecoNav2);
    printf("\nInforme em qual coluna deseja posicionar o navio 2: ");
    scanf("%d",&colComecoNav2);
    printf("Informe se o navio 2 estará na diagnoal, horizontal ou na vertical: ");
    scanf(" %c",&orientacaoNav2);

    printf("\n");

    printf("\nInforme em qual linha deseja posicionar o navio 3[1 a 10]: ");
    scanf("%d",&linComecoNav3);
    printf("\nInforme em qual coluna deseja posicionar o navio 3: ");
    scanf("%d",&colComecoNav3);
    printf("Informe se o navio 3 estará na diagnoal, horizontal ou na vertical: ");
    scanf(" %c",&orientacaoNav3);

    printf("\n");

    printf("\nInforme em qual linha deseja posicionar o navio 4[1 a 10]: ");
    scanf("%d",&linComecoNav4);
    printf("\nInforme em qual coluna deseja posicionar o navio 4: ");
    scanf("%d",&colComecoNav4);
    printf("Informe se o navio 4 estará na diagnoal, horizontal ou na vertical: ");
    scanf(" %c",&orientacaoNav4);

    
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
        case 'D':{
            for(int i = 0; i < 3; i++){
                tabuleiro[linComecoNav1 + i][colComecoNav1 + i] = navio1[i];
            }
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
        case 'D':{
            for(int i = 0; i < 3; i++){
                tabuleiro[linComecoNav2 + i][colComecoNav2 + i] = navio2[i];
            }
        }
    }

    switch(orientacaoNav3){
        case 'H':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav3][colComecoNav3 + i] = navio3[i];
            }
            break;
        }
        case 'V':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav3 + i][colComecoNav3] = navio3[i];
            }
            break;
        }
        case 'D':{
            for(int i = 0; i < 3; i++){
                tabuleiro[linComecoNav3 + i][colComecoNav3 + i] = navio3[i];
            }
        }
    }
    switch(orientacaoNav4){
        case 'H':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav4][colComecoNav4 + i] = navio4[i];
            }
            break;
        }
        case 'V':{
            for(int i = 0; i < 3; i++){
            tabuleiro[linComecoNav4 + i][colComecoNav4] = navio4[i];
            }
            break;
        }
        case 'D':{
            for(int i = 0; i < 3; i++){
                tabuleiro[linComecoNav4 + i][colComecoNav4 + i] = navio4[i];
            }
        }
    }
    
    printf("\n\n");
    for(int i = 0; i < 10; i++){
        printf(" %c ", 'A'+i);
    }
    printf("\n\n\n");
    
    for(int i = 0; i < 10; i++){
        printf("%4d - ",i+1);
        
        for (int j = 0; j < 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n ");
    }
            
    return 0;
}
