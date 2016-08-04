#include<cstdio>

const int maxn = 512;
int pontos[maxn];

int main(){
    int j, r,ponto, maior=-1, vencedor;

    scanf(" %d %d", &j, &r);

    for (int k = 0; k<j; ++k)
        pontos[k] = 0;

    for (int i = 0; i<r; ++i)
        for (int k = 0; k<j; ++k){
            scanf(" %d", &ponto);
            pontos[k] += ponto;
        }


    for (int k = 0; k<j; ++k)
        if(maior<=pontos[k]){
            maior = pontos[k];
            vencedor = k;
        }

    printf("%d\n", vencedor+1);
    return 0;
}
