#include<cstdio>
#include<math.h>

const double inf = 0x3f3f3f3f;
const int maxn = 10100;
double mtx[maxn][maxn];
double distancia[maxn];
int marcado[maxn];
double array_x[maxn];
double array_y[maxn];
double maior;
int n;

void agm(){
    distancia[0]=0;

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
        if(menor_distancia > maior) maior = menor_distancia;

        for(int j = 0; j<n; ++j){
            if(!marcado[j] && mtx[menor][j] < distancia[j]){
                distancia[j] = mtx[menor][j];
            }
        }
    }

    printf("%.4lf\n", maior);
}

int main(){
    double x, y;
    int flag = 0;

    while(true){
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
          for (int i = 0; i<n; ++i){
              for (int j = 0; j<n; ++j){
                  mtx[i][j]=inf;
              }
              distancia[i] = inf;
              marcado[i] = 0;
          }

          for (int i = 0; i<n; ++i){
              for(int j = 0; j<n; ++j){
                  if (i != j) mtx[i][j] = mtx[j][i] = sqrt( pow((array_x[i] - array_x[j]),2) + pow((array_y[i] - array_y[j]),2) );
              }
          }


          maior=-1;
          agm();

          //printf("\n");

          //for (int i=0;i<n;++i){
            //printf("\t\t%d", i);
          //}
          //for (int i = 0; i<n; ++i){
            //printf("%d\t", i);
              //for(int j = 0; j<n; ++j){
                  //if(mtx2[i][j] != inf) printf("%lf\t", mtx2[i][j]);
                  //else printf("%lf\t", 0.0);
              //}
              //printf("\n");
          //}
        }
    }

    return 0;
}
