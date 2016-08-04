#include<cstdio>

int main(){
    int n, l, c, soma = 0;

    scanf(" %d", &n);
    for (int i=0; i<n; ++i){
        scanf(" %d %d", &l, &c);
        if (l>c) soma += c;
    }

    printf("%d\n", soma);

    return 0;
}
