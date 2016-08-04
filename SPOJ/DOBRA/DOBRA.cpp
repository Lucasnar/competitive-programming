#include<cstdio>
#include<math.h>

int funcao(int n){
    if (n == 1) return 5;
    else return ((funcao(n-1) * 2) - 1) ;
            }
int main(){
    int n, count=0, resultado;

    while(true){
        scanf(" %d", &n);
        if (n == -1) break;
        printf("Teste %d\n", ++count);

        if (n == 0) printf("%d\n\n", 4);
        else{
            resultado = pow(4, n) + funcao(n);
            printf("%d\n\n", resultado);
        }
    } 

    return 0;
}
