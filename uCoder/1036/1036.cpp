#include<cstdio>

const int maxn = 512;
int mtx[maxn][maxn];
int n;

int verificar(int x, int y){
    for (int i = x+1; i<=n; ++i)
        if (mtx[i][y] || mtx[i][y-1])
            return 0;
    return 1;
}

int main(){
    int m, flag=1;

    scanf(" %d %d", &n, &m);

    for(int i = 0; i<=n+1; ++i)
        for(int j = 0; j<=m+1; ++j)
            i == 0 || i == n+1 || j == 0 || j == m+1 ? mtx[i][j] = 0 : scanf(" %d", &mtx[i][j]);

    //for (int i = 0; i<=n+1; ++i){
        //for(int j = 0; j<=m+1; ++j)
            //printf("%d ", mtx[i][j]);
        ////printf("\n");
    //}

    for (int i = 1; i<=n; ++i){
        if (!flag) break;
        for (int j = 1; j<=m; ++j)
            if (mtx[i][j]){
                flag = verificar(i, j);
                break;
            }
    }

    flag ? printf("S") : printf("N");
    printf("\n");

    return 0;
}
