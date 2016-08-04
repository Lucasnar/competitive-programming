#include<cstdio>

int h, l;

inline int passa(int x, int y){
    return x <= h && y <= l;
}

int main(){
    int a, b, c;

    scanf(" %d %d %d %d %d", &a, &b, &c, &h, &l);

    printf(passa(a, b) || passa(b, a) || passa(a, c) || 
            passa(c, a) || passa(b, c) || passa(c, b)
            ? "S" : "N");
    printf("\n");

    return 0;
}
