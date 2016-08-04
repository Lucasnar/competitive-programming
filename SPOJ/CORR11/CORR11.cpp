#include<cstdio>
#include<cstdlib>

int carros[110];
int carros_pos[110];

int cmp(const void *n1, const void *n2){
    return (*(int *)n1 - *(int *)n2);
}

int main(){

    int n, m, aux, soma;
    scanf(" %d %d", &n, &m);

    for(int i = 1; i <= n; i++){
        soma = 0;
        for(int j = 1; j <= m; j++){
            scanf(" %d", &aux); 
            soma += aux;
        }
        carros[i] = soma;
    }

    for(int i = 1; i <= n; i++){
        carros_pos[i] = carros[i];
    }

    qsort(carros, n+1, 4, cmp);

    int pos1, pos2, pos3;
    for(int i = 1; i <= n; i++){
        if (carros[1] == carros_pos[i]) pos1 = i;
        if (carros[2] == carros_pos[i]) pos2 = i;
        if (carros[3] == carros_pos[i]) pos3 = i;
    }
    
    printf("%d\n%d\n%d\n", pos1, pos2, pos3);

    return 0;
}
