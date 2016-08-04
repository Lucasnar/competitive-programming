#include<cstdio>

int flag = 0;

int testar_combinacao(int a, int b, int c){
    int count = 0;
    if (a < b + c) count++;
    if (b < a + c) count++;
    if (c < a + b) count++;

    if(count == 3) flag= 1;
}

int main(){
    int vet[4];

    for (int i = 0; i<4; ++i)
        scanf(" %d", &vet[i]);

    for (int i = 0; i<4; ++i)
        testar_combinacao(vet[i], vet[(i + 1) % 4], vet[(i+2) % 4]);

    if(flag) printf("S\n");
    else printf("N\n");

    return 0;
}
