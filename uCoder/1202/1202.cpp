#include<cstdio>
#include<algorithm>

const int maxn = 24; 
int livros[maxn];
int tempos[maxn];
int tabela[maxn][48];

inline int max(int a, int b){
    return a< b ? b : a;
}


int main(){
    int n;
    int x, y;

    while(1){
        scanf(" %d", &n);
        if (!n) break;

        for(int i = 1; i<=n; ++i)
            scanf(" %d %d", &livros[i], &tempos[i]);

        for(int i = 0; i<=n; ++i)
            for(int j =0 ; j<= 48; ++j)
                tabela[i][j] = 0;

        //std::sort();
        
        for(int i = 1; i<=n; ++i)
            for(int j=1; j<=48; ++j)
                if (j - tempos[i] >= 0)
                    tabela[i][j] = max(tabela[i-1][j] , tabela[i-1][j - tempos[i]] +livros[i]);
                else
                    tabela[i][j] = tabela[i-1][j];

        printf("%d livro(s)\n", tabela[n][48]);
    }

    return 0;
}
