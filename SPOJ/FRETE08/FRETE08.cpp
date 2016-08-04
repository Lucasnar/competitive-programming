#include<cstdio>

const int maxn = 1010;
const int inf = 0x3f3f3f3f;
int grafo[maxn][maxn];
int distancia[maxn];
int marcado[maxn];
int n, m;

int arvore_minima(){
   int custo = 0;
   distancia[0] = 0;

   for (int i = 0; i<n; ++i){
       int minimo = -1;
       int melhor_distancia = inf;

       for (int j=0; j<n; ++j){
           if(!marcado[j] && distancia[j] < melhor_distancia){
               minimo = j;
               melhor_distancia = distancia[j];
           }
       }

       marcado[minimo] = 1;
       custo += distancia[minimo];

       for (int j=0; j<n; ++j){
           if (!marcado[j] && distancia[j] > grafo[minimo][j]){
               distancia[j] = grafo[minimo][j];
           }
       }
   }

   return custo;
}

int main(){

    int a, b, c;
    scanf(" %d %d", &n, &m);

    for(int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            grafo[j][i] = inf;
        }
        distancia[i] = inf;
        marcado[i] = 0;
    }

    for(int i=0; i<m; ++i) {
        scanf(" %d %d %d", &a, &b, &c);
        grafo[a][b] = c;
        grafo[b][a] = c;
    }

    printf("%d\n", arvore_minima());

    return 0;
}
