#include<cstdio>

int main(){
    int q, n, q_nao_zeros, q_zeros, i;

    scanf(" %d", &q);
   
    for (i = 0; i<q; ++i){
        scanf(" %d", &n);

        q_nao_zeros = n + (2 * (n-1));
        q_zeros = (n * n) - q_nao_zeros;

        q_zeros > q_nao_zeros ?  printf("S ") : printf("N ");  
        printf("%d\n", q_zeros);
    }

    return 0;
}
