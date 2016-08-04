#include<cstdio>
#include<string.h>

int main(){
    int n, sbc, maior_sbc, n_mortes, n_mortes_sbc;
    char causa[102];
    char causa_maior[102];

    while(scanf(" %d ", &n) == 1){

        maior_sbc = -1;
        while(n--){
            gets(causa);
            scanf(" %d %d ", &n_mortes, &sbc);
            if(sbc > maior_sbc){
                maior_sbc = sbc;
                n_mortes_sbc = n_mortes;
                strcpy(causa_maior, causa);
            }
        }

        if(n_mortes_sbc> 1) 
            printf("%d pessoas morreram por %s!!", n_mortes_sbc, causa_maior);
        else 
            printf("1 pessoa morreu por %s!!", causa_maior);
        printf("\n");
    }

    return 0;
}
