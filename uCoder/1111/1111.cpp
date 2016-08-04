#include<cstdio>

inline int quadrante(int x, int y, int n){
    if (x<=n/2)
        if (y<=n/2) return 1;
        else return 2;
    else
        if (y<=n/2) return 3;
        else return 4;
    
}

int main(){
    int n, x1, x2, y1, y2;

    scanf(" %d %d %d %d %d", &n, &x1, &y1, &x2, &y2);

    quadrante(x1, y1, n) != quadrante(x2, y2, n) ? printf("S\n") : printf("N\n");

    return 0;
}
