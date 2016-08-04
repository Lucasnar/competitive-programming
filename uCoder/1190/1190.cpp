#include<cstdio>

int main(){
    int n, c=1, numero, aux=0;

    scanf(" %d", &n);
    while(n--){
        scanf(" %d", &numero);

        aux+=numero;
        if(aux < 1000000) c++;

    }
    printf("%d\n", c);

    return 0;
}
