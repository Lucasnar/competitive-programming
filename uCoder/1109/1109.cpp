#include<cstdio>

int main(){
    int n, k, pares, impares, s_atual;
    int s[1024][64];
    int s2[64];

    scanf(" %d %d", &n, &k);

    for (int i =0; i<n; ++i)
        for(int j = 0; j<k; ++j)
            scanf(" %d", &s[i][j]);

    pares = impares = 0;
    for (int j = 0; j<k; ++j){
        for (int i = 0; i<n; ++i)
            s2[j] += s[i][j];

        printf("s2[%d] = %d\n", j, s2[j]);
        if (!pares && s2[j] % 2)
            pares = 1;
        else if (!impares && !(s2[j] % 2)){
            impares = 1;
            //printf("s[%d] = %d\n", j, s2[j]);
        }
    }

    //printf("pares: %d impares: %d\n", pares, impares);
    pares && impares ? printf("N\n") : printf("S\n");

    return 0;
}
