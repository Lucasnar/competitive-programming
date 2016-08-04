#include<cstdio>

int main(){
    double a, b, c;

    scanf(" %lf %lf %lf", &a, &b, &c);

    printf("%d\n", a < b ? a < c ? 1 : 3 : b < c ? 2 : 3);

    return 0;
}
