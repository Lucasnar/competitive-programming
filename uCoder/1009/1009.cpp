#include<cstdio>

int mtx[5][5];

void verificar_e_corrigir(){
    int linha_canguru_faltando=0, coluna_canguru_faltando;
    int linha_canguru_sobrando, coluna_canguru_sobrando;

    for (int i = 1; i<=4; ++i){
        int cangurus_linha_atual=0;
        int cangurus_coluna_atual=0;

        for (int j=1; j<=4; ++j){
            if(mtx[i][j]) ++cangurus_linha_atual;
            if(mtx[j][i]) ++cangurus_coluna_atual;
        }

        if (cangurus_linha_atual == 1) linha_canguru_faltando = i;
        else if (cangurus_linha_atual == 3) linha_canguru_sobrando = i;

        if (cangurus_coluna_atual == 1) coluna_canguru_faltando = i;
        else if (cangurus_coluna_atual == 3) coluna_canguru_sobrando = i;
    }

    if (!linha_canguru_faltando) printf("CORRETO");
    else printf("MOVER CANGURU DE (%d,%d) PARA (%d,%d)", 
            linha_canguru_sobrando, coluna_canguru_sobrando,
            linha_canguru_faltando, coluna_canguru_faltando);
    printf("\n");
}

int main(){
    int n, canguru;

    while(scanf(" %d", &n) != EOF){
        printf("Caso %d: ", n);

        for (int i =1; i<=4;++i)
            for (int j=1; j<=4; ++j){
                scanf(" %d", &canguru);
                mtx[i][j] = canguru;
            }
        verificar_e_corrigir();
    }

    return 0;
}
