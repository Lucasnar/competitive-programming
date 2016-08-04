#include<cstdio>

inline int forma_ret(int a, int b, int c, int d){
    return a * b == c * d;
}

int main(){
    int a, b, c, d;

    scanf(" %d %d %d %d", &a, &b, &c, &d);

    printf( forma_ret(a, b, c, d) || forma_ret(a, c, b, d) || forma_ret(a, d, b, c) ? "S\n" : "N\n");

    return 0;
}
