#include<bits/stdc++.h>

const int maxn = 100;
int custos[maxn];
int votos[maxn];
int mtx[maxn][maxn];
int gastos[maxn][maxn];
int maior;

inline int max(int a, int b){
    maior = a<b ? b: a;
    return maior;
}
int main(){
    int t;
    int qtd_itens, caixa;

    scanf(" %d", &t);

    while(t--){
        scanf(" %d %d", &caixa,&qtd_itens);

        for (int i = 1; i <= qtd_itens; ++i){
            scanf(" %d %d", &custos[i], &votos[i]);
            mtx[i][0] = 0;
        }

        for(int i =0; i<=caixa; ++i)
            mtx[0][i] = 0;

        memset(gastos, 0, sizeof(gastos));

        for(int i = 1; i<=qtd_itens; ++i)
            for (int j = 1; j<=caixa; ++j)
                if(custos[i] > j){
                    mtx[i][j] = mtx[i-1][j];
                    gastos[i][j] = gastos[i-1][j];
                }
                else{
                    if(mtx[i-1][j] < mtx[i-1][j - custos[i]] + votos[i]){
                        mtx[i][j] = mtx[i-1][j - custos[i]] + votos[i];
                        gastos[i][j] = gastos[i-1][j - custos[i]] + custos[i];
                    }
                    else{
                        mtx[i][j] = mtx[i-1][j];
                        gastos[i][j] = gastos[i-1][j];
                    }
                }

        mtx[qtd_itens][caixa] ? printf("%d %d\n", mtx[qtd_itens][caixa], caixa-gastos[qtd_itens][caixa]) : printf("NO FUNDS\n");
    }


    return 0;
}
