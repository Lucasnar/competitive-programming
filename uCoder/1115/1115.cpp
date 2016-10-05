#include<cstdio>

int main(){
    int a, b, c, d;

    scanf(" %d %d %d %d", &a, &b, &c, &d);

    if (b == c && d == b + c && a == b + c + d) printf("S");
    else printf("N");
    printf("\n");

    return 0;
}
