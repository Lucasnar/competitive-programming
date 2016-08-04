#include<cstdio>

int main(){
    int jogo[6];
    int resultado[6];
    int count=0;

    for (int i = 0; i<6; ++i)
        scanf(" %d", &jogo[i]);

    for (int i = 0; i<6; ++i)
        scanf(" %d", &resultado[i]);


    for (int i  =0; i<6; ++i)
        for (int j=0; j<6; ++j)
            if (jogo[i] == resultado[j])
                ++count;

    switch(count){
        case 3:
            printf("terno");
            break;
        case 4:
            printf("quadra");
            break;
        case 5:
            printf("quina");
            break;
        case 6:
            printf("sena");
            break;
        default:
            printf("azar");
            break;
    }

    printf("\n");

    return 0;
}
