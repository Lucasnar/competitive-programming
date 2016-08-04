#include<cstdio>

const int maxn=1000;
int tabuleiro[maxn][maxn];
int linhas[maxn];
int colunas[maxn];

int main(){
    int n, peso, maior=0;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i)
        linhas[i] = colunas[i] = 0;

    for(int i = 0; i<n; ++i)
        for (int j = 0; j<n; ++j){
            scanf(" %d", &tabuleiro[i][j]);
            linhas[i] += tabuleiro[i][j];
            colunas[j] += tabuleiro[i][j];
        }

    for(int i = 0; i<n; ++i)
        for (int j = 0; j<n; ++j){
            peso = linhas[i] + colunas[j] - 2*tabuleiro[i][j];
            if (peso > maior)
                maior = peso;
        }

    printf("%d\n", maior);

    return 0;
}
