#include<cstdio>
#include<math.h>

const int maxn = 64;
const int inf = 0x3f3f3f3f;
int x[maxn];
int y[maxn];
double mtx[maxn][maxn];
double distancia[maxn];
double marcado[maxn];
int n;

void agm(){
    distancia[0]=0;
    double resultado = 0;

    for (int i = 0; i<n; ++i){

        double menor_distancia=inf;
        int menor;

        for (int j = 0; j < n; ++j){
            if(!marcado[j] && distancia[j] < menor_distancia){
                menor = j;
                menor_distancia = distancia[j];
            }
        }

        marcado[menor] = 1;
        resultado += distancia[menor];
        //if(menor_distancia > maior) maior = menor_distancia;

        for(int j = 0; j<n; ++j){
            if(!marcado[j] && mtx[menor][j] < distancia[j]){
                distancia[j] = mtx[menor][j];
            }
        }
    }

    printf("%.4lf\n", resultado);
}

int main(){
    int t;

    scanf(" %d", &t);
    while(t--){
        scanf(" %d", &n);

        for (int i = 0; i<n; ++i){
            scanf(" %d %d", &x[i], &y[i]);
            for (int j = 0; j<n; ++j){
                mtx[i][j]=inf;
            }
            distancia[i] = inf;
            marcado[i] = 0;
        }

        for (int i = 0; i<n; ++i){
            for(int j = 0; j<n; ++j){
                if (i != j) mtx[i][j] = mtx[j][i] = sqrt( pow((x[i] - x[j]),2) + pow((y[i] - y[j]),2) );
            }
        }

        agm();
    }

    return 0;
}
