#include<cstdio>
#include<algorithm>

#define maxn 1024
int lista[maxn];
int tabela[maxn][maxn];

int main(){
    int n, r_aluno;

    while(scanf(" %d %d", &n, &r_aluno) == 2){
        for(int i =1;i<=n; ++i)
            scanf(" %d", &lista[i]);

        std::sort(lista+1, lista+n+1);

        for(int i = 0;i<=n;++i){
            tabela[0][i] = 0;
            tabela[i][0] = 1;
        }

        for(int i =1; i<=n; ++i){
            for(int j =1; j<=n; ++j){
                if(


        }
    }

    return 0;
}
/*
 * caso base: n = 3
 * hip: sei resolver para n-1
 * passo:
 * 3 - 1
 * 4 - 4
 * 5 - 10
 * n ^ n-3
