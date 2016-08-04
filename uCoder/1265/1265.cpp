#include<cstdio>
#include<stdlib.h>

int cmp(const void * a, const void * b){
    return *(int *) b - *(int *) a;
}

int main(){
    int t;
    float atividades[12];
    float media_atividades, nota_necessaria, p3, media_necessaria;

    scanf(" %d", &t);

    while(t--){
        for (int i = 0; i<12; ++i)
            scanf(" %f", &atividades[i]);

        qsort(atividades, 12, sizeof(float), cmp);

        media_atividades = 0.0;
        for(int i =0; i< 9; ++i)
            media_atividades += atividades[i];

        media_atividades /= 9.0;
        media_atividades = media_atividades/5.0;
        nota_necessaria = 5.75 - media_atividades;
        media_necessaria = nota_necessaria*5.0/4.0;
        p3 = 2.0*media_necessaria;
        
        if (p3 >= 10.0)
            printf("REPROVADO");
        else
            printf("%.2f", p3);
        printf("\n");
    }

    return 0;
}
