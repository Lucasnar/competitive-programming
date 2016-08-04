#include<cstdio>

int suspeitos[1001];
int n;

int resolve(){
    int maior=-1;

    for(int i = 1; i<=n; ++i){
        scanf(" %d", &suspeitos[i]);
        if (suspeitos[i] > suspeitos[maior])
            maior = i;
    }
    suspeitos[maior] = -1;

    maior=-1;
    for(int i = 1; i<=n; ++i){
        if (suspeitos[i] > suspeitos[maior])
            maior = i;
    }

    printf("%d\n", maior);
}

int main(){

    while(true){
        scanf(" %d", &n);

        if(n) resolve();
        else break;
    }

    return 0;
}
