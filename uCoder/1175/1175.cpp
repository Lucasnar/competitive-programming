#include<cstdio>

//A função que Rafael escolheu é r(x, y) = (3x)2 + y2.
//Já Beto escolheu a função b(x, y) = 2(x2) + (5y)2.
//Carlos, por sua vez, escolheu a função c(x, y) = -100x + y3.

inline int r(int x, int y){
    return 3 * x * 3 * x + y*y;
}

inline int b(int x, int y){
    return 2 * x * x + 5 * y * 5 * y;
}

inline int c(int x, int y){
    return -100 * x + y*y*y;
}

int main(){
    int t, x, y,m, maior;

    scanf(" %d", &t);

    while(t--){
        scanf(" %d %d", &x, &y);


        m = 0;
        maior = 0;

        if (r(x, y) > m)
            m = r(x, y);
        if (b(x, y) > m)
            m = b(x, y), maior = 1;
        if(c(x, y) > m)
            m = c(x, y), maior = 2;

        !maior ? printf("Rafael ganhou") : maior == 1 ? printf("Beto ganhou") : printf("Carlos ganhou");
        printf("\n");

    }

    return 0;
}
