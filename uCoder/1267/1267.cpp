#include<cstdio>

inline double calc_3_meses(double valor){
    return ((((valor*1.01)+valor)*1.01)+valor)*1.01;
}

int main(){
    double h_br, h_es, h_mes, gastos_br, gastos_es, conv;
    scanf(" %lf %lf %lf %lf %lf %lf", &h_br, &h_es, &h_mes, &gastos_br, &gastos_es, &conv);

    double mes_br = (h_br * h_mes) * (100.0 - gastos_br)/100.0;
    double mes_es = (h_es * h_mes) * (100.0 - gastos_es)/100.0;

    printf("%.2lfBR %.2lfES\n", calc_3_meses(mes_br), calc_3_meses(mes_es) * conv);

    return 0;
}
