#include<cstdio>

int main(){
    char letra;
    char palavra[1024];
    double n_palavras=0.0, count=0.0;

    scanf(" %c", &letra);

    while(scanf(" %s", palavra) == 1) {

        ++n_palavras;
        for (int i = 0; palavra[i]; ++i){
            if (palavra[i] == letra) { ++count; break;}
        }

    }

    printf("%.1lf\n", (count*100.0)/n_palavras);

    return 0;
}
