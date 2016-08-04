#include<cstdio>
#include<cstdlib>
#include<math.h>

using namespace std;

const double inf = 0x3f3f3f3f;

int ponto_no_circulo(int xa, int ya, int r, int xm, int ym){
    return (((xm - xa) * (xm - xa)) + ((ym - ya) * (ym - ya))) <= r*r;
}

typedef struct letra_e_dist{
    char letra;
    double dist;
} l_d;

int main(){
    int n;
    int xa, ya;
    int r;
    int q_misseis;
    int xm, ym;

    char alfabeto[] = "BCDEFGHIJKLMNOPQRSTUVWXYZ";

    scanf(" %d", &n);

    for(int i=0; i<n; ++i){
        scanf(" %d %d %d %d", &xa, &ya, &r, &q_misseis);
        l_d ld[25];
        l_d aux;
        int count = 0;

        for(int j = 0; j<25; ++j)
            ld[j].dist = inf;

        for (int j=0; j<q_misseis; ++j){
            scanf(" %d %d", &xm, &ym);
            if(ponto_no_circulo(xa, ya, r, xm, ym)){
                ld[j].letra = alfabeto[j];
                ld[j].dist = sqrt(pow((xm - xa), 2) + pow((ym - ya), 2));
                ++count;
            }
        }

        // buble sort
        for (int j = 24; j>= 1; --j){
            for (int k = 0; k<j; ++k){
                if (ld[k].dist > ld[k+1].dist){
                    aux = ld[k];
                    ld[k]= ld[k+1];
                    ld[k+1] = aux;
                }
            }
        }

        if (ld[0].dist == inf) printf("OUT OF RANGE");
        else{
            for(int j=0; j<count; ++j){
                if (ld[j].dist != inf) 
                    if (j == count-1) printf("%c", ld[j].letra);
                    else printf("%c ", ld[j].letra);
            }
        }
        printf("\n");
    }

    return 0;
}
