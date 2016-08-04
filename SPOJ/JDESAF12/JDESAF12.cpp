#include<cstdio>

int main(){
    int n, maior = -1;
    while (true){
        scanf(" %d", &n);
        if (n == 0) break;
        if (n > maior) maior=n;
    }
    printf("%d\n", maior);

    return 0;
}
