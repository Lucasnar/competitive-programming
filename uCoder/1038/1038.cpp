#include<cstdio>

const int maxn = 64;
int quad[maxn][maxn];
int somas_i[maxn];
int somas_j[maxn];

int main(){
    int x;
    int soma_correta;
    int indice_errado_i, indice_errado_j;

    scanf(" %d", &x);

    for (int i = 0; i<x; ++i){
        somas_i[i] = 0;
        somas_j[i] = 0;
        for (int j = 0; j<x; ++j)
            scanf(" %d", &quad[i][j]);
    }

    for (int i = 0; i<x; ++i)
        for (int j = 0; j<x; ++j){
            somas_i[i] += quad[i][j];
            somas_j[j] += quad[i][j];
        }
        
    if(somas_i[0] == somas_i[1] || somas_i[0] == somas_i[2])
        soma_correta = somas_i[0];
    else
        soma_correta = somas_i[1];

    for (int i = 0; i<x; ++i){
        if (somas_i[i] != soma_correta)
            indice_errado_i = i;
        if (somas_j[i] != soma_correta)
            indice_errado_j = i;
    }

    //printf("soma_correta: %d\n", soma_correta);

    //printf("somas_i: ");
    //for (int i = 0; i<x; ++i)
        //printf("%d ", somas_i[i]);
    //printf("\n");
    //printf("somas_j: ");
    //for (int i = 0; i<x; ++i)
        //printf("%d ", somas_j[i]);
    //printf("\n");

    //printf("errado i: %d errado j: %d\n", indice_errado_i, indice_errado_j);
    

    int valor_incorreto = quad[indice_errado_i][indice_errado_j];
    int valor_correto = valor_incorreto - (somas_i[indice_errado_i] - soma_correta);
    if (valor_correto < 0) valor_correto = -valor_correto;

    printf("%d %d\n", valor_correto, valor_incorreto);


    return 0;
}
