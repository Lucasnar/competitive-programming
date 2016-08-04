#include<cstdio>

int main(){
    double z, n, consumo;
    int a;

    //1 000 000
    //23 000

    while(scanf(" %lf", &z) == 1){

        a=2016;
        n =0;
        consumo = 0.023;
        while(true){
            n += consumo;
            //printf("n: %.5lf consumo: %.5lf\n", n, consumo);
            if(n>=1)
                break;
            consumo = consumo*(1.0 + z/100.0);
            ++a;
        }

        printf("%d\n", a);
    }

    return 0;
}
