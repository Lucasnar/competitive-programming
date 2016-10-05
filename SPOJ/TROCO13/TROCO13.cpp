#include<cstdio>
#include<algorithm>

inline int cmp(int a, int b){
    return a>b;
}

int main(){
    int v, m, solucao_atual;

    scanf(" %d %d", &v, &m);

    int moedas[m];
    int tabela[m+1][v+1];

    for(int i = 1; i<=m; ++i)
        scanf(" %d", &moedas[i]);

    std::sort(moedas+1, moedas+m+1, cmp);

    for(int i = 0; i<=m; ++i)
        tabela[i][0] = 1;

    for (int j = 1; j<=v; ++j)
        tabela[0][j] = 0;

    for(int i = 1; i<=m; ++i)
        for(int j = 1; j<=v; ++j){
            if(j - moedas[i] >= 0)
                if(moedas[i] - j == 0)
                    tabela[i][j] = 1;
                else if(tabela[i-1][j])
                    tabela[i][j] = 1;
                else if(tabela[i-1][j-moedas[i]])
                    tabela[i][j] = 1;
                else
                    tabela[i][j] = 0;
            else
                tabela[i][j] = 0;
        }


    //printf("tabela:\n");
    //for(int i = 0; i<=m; ++i){
        ////for(int j = 0; j<=v; ++j)
            //printf("%d ", tabela[i][j]);
        //printf("\n");
    //}

    printf(tabela[m][v] ? "S\n" : "N\n");

    return 0;
}
