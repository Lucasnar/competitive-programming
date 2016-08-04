#include<cstdio>

int main(){
    int n, operacao, soma, count = 0;

    while(true){
        scanf(" %d", &n);
        ++count;
        soma = 0;
        if (n == 0) break;
        for (int i = 0; i<n; ++i){
            scanf(" %d", &operacao);
            soma += operacao;
        }
        printf("Teste %d\n%d\n\n", count, soma);
    }
            

    return 0;
}
