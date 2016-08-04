#include<cstdio>

int main(){
    char gabarito[6];
    char resposta;
    int nota=0, i;

    for (i =0; i< 5; ++i) scanf(" %c", &gabarito[i]);
    for (i =0; i< 5; ++i) {
        scanf(" %c", &resposta);
        if (resposta == gabarito[i]) nota+=2 ;
    }

    printf("%d\n", nota);

    return 0;
}
