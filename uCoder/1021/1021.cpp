#include<cstdio>

void inline printI() {printf("GANHO INSUFICIENTE\n");}
void inline printN() {printf("GANHO NORMAL\n");}
void inline printE() {printf("GANHO EXAGERADO\n");}

void calcula_ganho(float ganho, float limite_menor, float limite_maior){
    if(ganho < limite_menor) printI();
    else if(ganho <= limite_maior) printN();
    else printE();
}

int main(){
    int n;
    float h, o, a, imc, ganho;

    scanf("%d", &n);

    for (int i= 0; i<n; ++i){
        scanf(" %f %f %f", &h, &o, &a);
        imc  = o / (h*h);
        ganho = a - o;

        if(imc < 18.5){
            calcula_ganho(ganho, 12.5, 18.0);
        }
        else if (imc < 25.0){
            calcula_ganho(ganho, 11.0, 16.0);
        }
        else if (imc < 30.0){
            calcula_ganho(ganho, 7.0, 11.5);
        }
        else{
            calcula_ganho(ganho, 5.0, 9.0);
        }
    }

    return 0;
}
