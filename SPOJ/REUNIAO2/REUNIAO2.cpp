#include<cstdio>

const int inf = 0x3f3f3f3f;
const int maxn = 110;
int grafo[maxn][maxn];

int main(){
    int n, m, x, y, z;
    int maior_distancia=-1;
    int menor = inf;

    scanf(" %d %d", &n, &m);

    for(int i=0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            if(i==j) grafo[i][j] = 0;
            else grafo[i][j] = inf;
        }
    }

    for(int i=0; i<m; ++i){
        scanf(" %d %d %d",  &x, &y, &z);
        if(z < grafo[x][y])
            grafo[x][y] = grafo[y][x] = z;
    }

    for (int k = 0; k<n; ++k)
        for (int i = 0; i<n; ++i)
            for (int j = 0; j<n; ++j)
                if(grafo[i][k] + grafo[k][j] < grafo[i][j]) grafo[i][j] = grafo[i][k] + grafo[k][j];
   
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<n; ++j)
            if (grafo[i][j] > maior_distancia) maior_distancia = grafo[i][j];

        if(maior_distancia < menor) 
            menor = maior_distancia;
        maior_distancia = -1;
    }

    printf("%d\n", menor);
      
    return 0;
}
