#include<cstdio>

const int maxn = 108;
int tab[maxn][maxn];
int valores[57];
int n, q, op;

int mais_frequente(){
    int v_mais_frequente=-1, i_mais_frequente;
    for(int i = 0; i<=56; ++i)
        if (valores[i] >= v_mais_frequente)
            v_mais_frequente = valores[i], i_mais_frequente = i;
        //else if(valores[i] == v_mais_frequente)
            //i_mais_frequente = i;

    return i_mais_frequente;
}

void zerar_valores(){
    for(int i = 0; i<=56; ++i)
        valores[i] = 0;
}

int mais_frequente_da_linha(int x){
    zerar_valores();
    for(int i =  1; i<=n; ++i)
        ++valores[tab[x][i]];
        //printf("++valores[tab[%d][%d]] = ++valores[%d] = %d\n", x, i, tab[x][i], valores[tab[x][i]]);

    return mais_frequente();
}

int mais_frequente_da_coluna(int x){
    zerar_valores();
    for(int i =  1; i<=n; ++i)
        ++valores[tab[i][x]];
    return mais_frequente();
}

inline void atribuir_r_coluna(int x, int r){
    for(int i =  1; i<=n; ++i)
        tab[i][x] = r;
}

inline void atribuir_r_linha(int x, int r){
    for(int i =  1; i<=n; ++i)
        tab[x][i] = r;
}

void operacao(int op){
    int x, r;
    switch(op){
        case 1:
            scanf(" %d %d", &x, &r);
            atribuir_r_linha(x, r);
            break;
        case 2:
            scanf(" %d %d", &x, &r);
            atribuir_r_coluna(x, r);
            break;
        case 3:
            scanf(" %d", &x);
            printf("%d\n", mais_frequente_da_linha(x));
            break;
        case 4:
            scanf(" %d", &x);
            printf("%d\n", mais_frequente_da_coluna(x));
            break;
    }
}


int main(){
    scanf(" %d %d", &n, &q);

    for(int i =  1; i<=n; ++i)
        for(int j = 1; j<=n; ++j)
            tab[i][j] = 0;

    for(int i =1; i<=q; ++i){
        scanf(" %d", &op);
        operacao(op);
    }


    return 0;
}
