#include<cstdio>

int main(){
    int cartas[5];

    for(int i = 0; i<5; ++i)
        scanf(" %d", &cartas[i]);

    int c=1, d=1;

    for(int i = 1; i<4; ++i)
        if(cartas[i] > cartas[i-1])
            d = 0;
        else if (cartas[i] < cartas[i-1])
            c = 0;

    printf(c ? "C" : d ? "D" : "N");
    printf("\n");

    return 0;
}
