#include <stdio.h>
#include <stdlib.h>

#define S 5
#define T 10
#define N 3

int main(){
    //Inicialização do tabuleiro
    int tabuleiro[T][T];
    
    for(int i = 0; i < T; i++){
        for (int j = 0; j < T; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    //Visualizando tabuleiro vazio
    printf("\n===Batalha Naval===\n");
    printf("\nTabuleiro Vazio\n");
    
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //Definindo Skills:
    int cone[S][S];
    
    for (int i = 0; i < S; i++){
        for(int j = 0; j < S; j++){
            if(j >= (S/2 - i) && j <= (S/2 + i) && i <= S/2){
                cone[i][j] = 1;
            }else{
                cone[i][j] = 0;
            }
        }
    }
    int cruz[S][S];
    
    for (int i = 0; i < S; i++){
        for (int j = 0; j < S; j++){
            if(i == S/2 || j == S/2){
                cruz[i][j] = 1;
            }else{
                cruz[i][j] = 0;
            }
        }
    }
    int octaedro[S][S];
    
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            if (abs(i - S/2) + abs(j - S/2) <= S/2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }
    
    //Inicializando navios
    int navioHorizontal[N] = {3,3,3};
    int navioVertical[N] = {3,3,3};
    int navioDiagonal[N] = {3,3,3};
    
    //Posicionando navios no tabuleiro:
    
    //Navio 1: Linha: 1, Coluna: 2, Orientação: Horizontal
    for(int i = 0; i < N; i++){
        tabuleiro[1][2 + i] = navioHorizontal[i];
    }
    //Navio 2: Linha 2, coluna 2, Orientação: Vertical
    for(int i = 0; i < N; i++){
        tabuleiro[2 + i][7] = navioVertical[i];
    }
    //Navio 3: Linha 7, coluna 2, Orientação: Diagonal
    for(int i = 0; i < N; i++){
        tabuleiro[4 + i][6 + i] = navioDiagonal[i];
    }
    
    printf("\n");
    
    printf("\n===Batalha Naval===\n");
    printf("\nTabuleiro Com Navios\n");
    //Visualizando tabuleiro após posicionar os barcos
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Origem das habilidades no tabuleiro
    int origemConeLin = 2, origemConeCol = 2;
    int origemCruzLin = 6, origemCruzCol = 6;
    int origemOctLin = 5, origemOctCol = 2;
    //Posicionando skills no tabuleiro
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            int lin = origemConeLin + i - S/2;
            int col = origemConeCol + j - S/2;
            if (lin >= 0 && lin < T && col >= 0 && col < T && cone[i][j] == 1) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            int lin = origemCruzLin + i - S/2;
            int col = origemCruzCol + j - S/2;
            if (lin >= 0 && lin < T && col >= 0 && col < T && cruz[i][j] == 1) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            int lin = origemOctLin + i - S/2;
            int col = origemOctCol + j - S/2;
            if (lin >= 0 && lin < T && col >= 0 && col < T && octaedro[i][j] == 1) {
                tabuleiro[lin][col] = 5;
            }
        }
    }
    
    printf("\n");
    
    printf("\n===Batalha Naval===\n");
    printf("\nTabuleiro Com Navios e Habilidades\n");
    //Visualizando tabuleiro após posicionar as skills!
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
   
    

    
    
}
