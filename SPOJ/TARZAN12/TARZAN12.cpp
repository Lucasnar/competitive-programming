#include<cstdio>
#include<math.h>

const int maxn = 1010;
int mtx[maxn][maxn];
int dist_x[maxn];
int dist_y[maxn];
int marcado[maxn];
int n, d;

int dfs(int v){
    marcado[v] = 1;
    for(int i = 1; i<=n; ++i) if (mtx[v][i] && !marcado[i]) dfs(i);
}

int main(){
    int x, y;
    int dist;

    scanf(" %d %d", &n, &d);

    d *= d;

    for (int i=1; i<=n; ++i){
       scanf(" %d %d", &x, &y);
       dist_x[i] = x;
       dist_y[i] = y;
    }

    for (int i = 1; i<=n; ++i){
        for (int j = 1; j<=n; ++j) mtx[i][j] = mtx[j][i] = 0;
        marcado[i] =0 ;
    }

    for(int i = 1; i<=n; ++i){
        for (int j = 1; j<=n; ++j){
            dist = pow(dist_x[i] - dist_x[j], 2) + pow(dist_y[i] - dist_y[j], 2);
            //printf("%d\n\n", dist);
            if (dist <= d) mtx[i][j] = mtx[j][i] = dist;
        }
    }

    //for(int i =1; i<=n; ++i){
        //for (int j=1; j<=n; ++j)
            //printf("%d\t", mtx[i][j]);
        //printf("\n");
    //}
    
    //printf("d: %d, n:%d \n\n", d, n);

    dfs(1);

    for(int i = 1; i<=n; ++i)
        if (!marcado[i]){ printf("N\n"); return 0;}

    printf("S\n");
    return 0;
}
