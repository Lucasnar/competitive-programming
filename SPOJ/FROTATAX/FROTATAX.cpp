#include<cstdio>

int main(){
    double a, g, ra, rg;

    scanf(" %lf %lf %lf %lf", &a, &g, &ra, &rg);

    if (a/ra < g/rg) printf("A\n");
    else printf("G\n");

    return 0;
}
