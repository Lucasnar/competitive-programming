#include<cstdio>

int main(){
    int n, p, q, v, d, total=0;

    scanf(" %d", &n);

    for (int i = 0; i<n; ++i){
        scanf(" %d", &p);

        for (int j = 0; j<p; ++j){
            scanf(" %d %d", &q, &v);
            total += q*v;
        }

        scanf(" %d", &d);
        total <= d ? printf("%d", d - total) : printf("DINHEIRO INSUFICIENTE");
        printf("\n");
        total=0;
    }



    return 0;
}
