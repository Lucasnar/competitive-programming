#include<cstdio>
#include<stdlib.h>
#include<string.h>


int main(){
    char n[1100];
    int k;
    int soma_impar, soma_par;

    while(true){
        scanf(" %s", n);
        if(!strcmp(n, "0")) break;
        soma_impar = soma_par = 0;
        for (int i = 0, l = strlen(n); i<l; ++i){
            if (i % 2 == 0) soma_par += n[i] - 48;
            else soma_impar += n[i] -48;
        }
        //printf("Soma_par:%d\nSoma_impar:%d\n",soma_par,soma_impar);
        if(soma_par == 0 || soma_impar == 0 || (soma_par-soma_impar) % 11 == 0) printf("%s is a multiple of 11.\n", n);
        else printf("%s is not a multiple of 11.\n", n);
    }

    return 0;
}
