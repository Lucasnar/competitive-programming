#include<cstdio>
#include<math.h>

const double inf = 0x3f3f3f3f;
const int maxn = 10100;
double grafo[maxn][maxn];
double array_x[maxn];
double array_y[maxn];

int main(){
    double x, y;
    int n;

    while(true){
        double menor = inf, valor;
        double maior_distancia=-1;
        scanf(" %d", &n);

        if (n == 0) break;

        for (int i = 0; i<n; ++i){
            scanf(" %lf %lf", &x, &y);
            array_x[i] = x;
            array_y[i] = y;
        }

        if (n == 1) printf("%.4lf\n", 0.0);

        else if (n == 2) printf("%.4lf\n", sqrt( pow((array_x[0] - array_x[1]),2) + pow((array_y[0] - array_y[1]),2)));

        else{
            for (int i = 0; i<n; ++i)
                for (int j = 0; j<n; ++j){
                    if(i==j) grafo[i][j] = 0;
                    else grafo[i][j] = inf;
                }

            for (int i = 0; i<n; ++i)
                for (int j = 0; j<n; ++j){
                    valor = sqrt( pow((array_x[i] - array_x[j]),2) + pow((array_y[i] - array_y[j]),2) );
                    grafo[i][j] = grafo[j][i] = valor;
                }

            for (int k = 0; k<n; ++k)
                for (int i = 0; i<n; ++i)
                    for (int j = 0; j<n; ++j)
                        if(grafo[i][k] + grafo[k][j] < grafo[i][j]) grafo[i][j] = grafo[i][k] + grafo[k][j];

            for (int i = 0; i<n; ++i){
                for (int j = 0; j<n; ++j)
                    if (grafo[i][j] > maior_distancia) maior_distancia = grafo[i][j];
               if (maior_distancia < menor) menor = maior_distancia; 
               maior_distancia = -1;
            }


            printf("%.4lf\n", menor);
        }
    }

    return 0;
}
