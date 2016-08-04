#include<cstdio>

int mtx[maxn][maxk];
int valor[maxn];
int custo[maxn];
const int maxk = 1010;
const int maxn = 55;

int max(int a, int b){
    if (a > b) return a;
    return b;

int main(){
    int k, n;
    while(1){
        scanf(" %d %d", &k, &n);

        if (k == 0) break;

        for (int i=1; i<=n; ++i){
            scanf(" %d %d", &custo[i], &valor[i]);
        }

        for (int i = 0; i <= n; ++i){
            for (int j = 0; j <= k; ++j){
                mtx[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; ++i){


    return 0;
}
