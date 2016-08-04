#include<cstdio>

int main(){
    int r, count=0, a, b, soma_a= 0, soma_b =0;

    while(true){
        scanf(" %d", &r);
        if (r == 0) break;
        ++count;
        soma_a =0;
        soma_b=0;
        printf("Teste %d\n", count);
        for(int i = 0; i<r; ++i){
            scanf(" %d %d", &a, &b);
            soma_a += a;
            soma_b += b;
        }
        if (soma_a < soma_b) printf("Beto\n");
        else printf("Aldo\n");
        printf("\n");
    }


    return 0;
}
