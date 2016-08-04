#include<cstdio>

const int maxn = 50000;

int cartas[maxn];

int main(){
    int n, x, y, c=0;

    scanf(" %d", &n);

    for(int i = 1; i<=n; ++i)
        scanf(" %d", &cartas[i]);

    for(int i = 1; i<n; ++i){
        scanf(" %d %d", &x, &y);
        if (cartas[x] == cartas[y])
            c++;
    }

    printf("%d\n", c);

    return 0;
}
