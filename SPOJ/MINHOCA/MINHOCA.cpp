#include<cstdio>

const int inf = 0x3f3f3f3f;
const int maxn = 110;
int mtx[maxn][maxn];

int main(){
    int n, m, soma_atual = 0, atual, maior_soma_linhas = -1,maior_soma_colunas = -1;
    
    scanf(" %d %d", &n, &m);
    for(int i = 0; i<n; ++i)
        for (int j = 0; j<m; ++j){
            scanf(" %d", &atual);
            mtx[i][j] = atual;
        }
    
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<m; ++j)
            soma_atual += mtx[i][j];
        if(soma_atual > maior_soma_linhas) maior_soma_linhas = soma_atual;
        soma_atual = 0;
    } 

    for (int i = 0; i<m; ++i){
        for (int j = 0; j<n; ++j)
            soma_atual += mtx[j][i];
        if(soma_atual > maior_soma_colunas) maior_soma_colunas = soma_atual;
        soma_atual = 0;
    }

    if (maior_soma_linhas < maior_soma_colunas) printf("%d\n", maior_soma_colunas);
    else printf("%d\n", maior_soma_linhas);
    
    return 0;
}
