#include<cstdio>

int main(){
    int q, d, e;
    int mais, maior;
    char c;

    scanf(" %d%*c", &q);

    e = d = 0;
    for (int i = 0; i<q; ++i){
        scanf(" %c", &c);
        //printf("%c ", c);
        if (c == 'D') ++d;
        else ++e;
    }

    //printf("\nD: %d\nE: %d\n", d, e);

    maior = d < e; 
    mais = maior ? (e-d) % 4 : (d-e) % 4;

    //printf("\nmaior: %d\nmais: %d\n", maior, mais);

    if (mais == 0) printf("N");
    else if (mais == 2) printf("S");
    else if(maior){
        if (mais == 1) printf("O");
        if (mais == 3) printf("L");
    }
    else {
        if (mais == 1) printf("L");
        if (mais == 3) printf("O");
    }
    printf("\n");

    return 0;
}
