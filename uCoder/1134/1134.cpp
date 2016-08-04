#include<cstdio>

int main(){
    double a;
    int g;

    scanf(" %lf %d", &a, &g);

    printf("%.2lf\n", g == 1 ? 62.1 * a - 44.7 : 72.7 * a - 58);

    return 0;
}
