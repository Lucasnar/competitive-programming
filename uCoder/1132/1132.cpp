#include<cstdio>

int main(){
    double a, b, c;

    scanf(" %lf %lf %lf", &a, &b, &c);

    printf("%.1lf\n%.1lf\n%.1lf\n", a*b, 3.0*a + c, c * c * c);

    return 0;
}
