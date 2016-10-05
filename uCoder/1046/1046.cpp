#include<cstdio>

const int inf = 0x3f3f3f3f;
const int maxn = 128;
int graph[maxn][maxn];

void floyd_warshall(int n){
    // Initialize graph[i][j] = 0 and rest inf
    for(int k = 0; k<n; ++k)
        for(int i = 0; i<n; ++i)
            for(int j = 0; j<n; ++j)
                if(graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
}

int main(){
    int n, x, y, z, e=0;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<n; ++j)
            graph[i][j] = i == j ? 0 : inf;

    for(int i = 0; i<n-1; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        graph[--x][--y] = graph[y][x] = z;
    }

    floyd_warshall(n);

    //printf("graph\n");
    //for(int i = 0; i<n; ++i){
        //for(int j = 0; j<n; ++j)
            //printf("%d ", graph[i][j]);
        //printf("\n");
    //}

    for(int i = 0; i<n; ++i)
        for(int j = i; j<n; ++j)
            e += graph[i][j] > 0 ? 1 : 0;

    printf("%d\n", e);

    return 0;
}
