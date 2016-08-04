#include<cstdio>
#include<math.h>

const int maxn = 1100;
int dist_x[maxn];
int dist_y[maxn];

int main(){
    int n, x1, x2, y1, y2;
    double menor = 0x3f3f3f3f;
    double atual;

    scanf("%d", &n);

    for(int i = 0; i<n; ++i){
        scanf(" %d %d", &x1, &y1);
        dist_x[i] = x1;
        dist_y[i] = y1;
    }

    for (int i = 0; i<n; ++i)
        for (int j = 0; j<n; ++j){
            atual = sqrt(pow(dist_x[i] - dist_x[j], 2) + pow(dist_y[i] - dist_y[j], 2));
            if(i !=j && atual < menor ) menor = atual;
        }

    printf("%.3lf\n", menor);

    return 0;
}
