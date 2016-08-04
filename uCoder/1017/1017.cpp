#include<cstdio>

int nesimo_triangular(int n){
    if (n == 1) return 1;
    return n + nesimo_triangular(n-1);
}

int main(){
    int n;

    while (true){
        scanf(" %d", &n); if (n == 0) break;
        printf("%d\n", nesimo_triangular(n));
    }

    return 0;
}
