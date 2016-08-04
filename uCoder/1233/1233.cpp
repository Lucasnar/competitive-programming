#include<cstdio>

double s;

void print_aumento(int p){
    double n_s;
    
    n_s = s * (1.0 + p/100.0);
    printf("%.2lf\n%d%\n%.2lf\n%.2lf\n", s, p, n_s -s, n_s);
}

int main(){

    scanf(" %lf", &s);

    if (s <= 280.99) print_aumento(20);
    else if (s <= 700.99) print_aumento(15);
    else if (s <= 1500.99) print_aumento(10);
    else print_aumento(5);

    return 0;
}
