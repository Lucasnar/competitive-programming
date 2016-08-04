#include<cstdio>

int l, c;
int x, y, valor, selecionado;
int mtx[1100][1100];
int marcado[1100][1100];
int count;

void verificar_direita(int i, int j);
void verificar_cima(int i, int j);
void verificar_baixo(int i, int j);

void verificar_esquerda(int i, int j){
    while(mtx[i][--j] == selecionado)
        if(marcado[i][j] != 267){
            ++count;
            marcado[i][j] = 267;
            verificar_cima(i, j);
            verificar_baixo(i, j);
            verificar_direita(i, j);
        }
    
}

void verificar_direita(int i, int j){
    while(mtx[i][++j] == selecionado)
        if(marcado[i][j] != 267){
            ++count;
            marcado[i][j] = 267;
            verificar_cima(i, j);
            verificar_baixo(i, j);
            verificar_esquerda(i, j);
        }
}

void verificar_cima(int i, int j){
    while(mtx[--i][j] == selecionado)
        if(marcado[i][j] != 267){
            ++count;
            marcado[i][j] = 267;
            verificar_direita(i, j);
            verificar_baixo(i, j);
            verificar_esquerda(i, j);
        }
}

void verificar_baixo(int i, int j){
    while(mtx[++i][j] == selecionado)
        if(marcado[i][j] != 267){
            ++count;
            marcado[i][j] = 267;
            verificar_direita(i, j);
            verificar_cima(i, j);
            verificar_esquerda(i, j);
        }
}

void verificar(int i, int j){
    verificar_baixo(i, j);
    verificar_esquerda(i, j);
    verificar_cima(i, j);
    verificar_direita(i, j);
}

int main(){

    while(true){
        scanf(" %d %d", &l, &c);
        if (l==0) break;

        count =0 ;

        for (int i = 0; i<=l+1; ++i)
            for (int j = 0; j<=c+1; ++j){
                mtx[i][j] = -1;
                marcado[i][j] = 266;
            }

        for (int i = 1; i<=l; ++i)
            for (int j = 1; j<=c; ++j){
                scanf(" %d", &valor);
                mtx[i][j] = valor;
            }

        scanf(" %d %d", &x, &y);
        int x_original = x;
        int y_original = y;
        selecionado = mtx[x][y];

        while(mtx[++x][y] == selecionado)
            verificar(x, y);

        x = x_original;
        y = y_original;

        while(mtx[x][--y] == selecionado)
            verificar(x, y);

        x = x_original;
        y = y_original;

        while(mtx[--x][y] == selecionado)
            verificar(x, y);

        x = x_original;
        y = y_original;

        while(mtx[x][++y] == selecionado)
            verificar(x, y);

        count  == 0? printf("1\n") : printf("%d\n", count);
    }

    return 0;
}
