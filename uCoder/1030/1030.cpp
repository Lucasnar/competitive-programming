#include<cstdio>
#include<cstdlib>

const int maxn=1100;
int array[maxn];
int resultado[maxn];

int main(){
    int f,r, gota, dist1, dist2, maior=-1;

    scanf(" %d %d", &f, &r);

    for (int i=1; i<=r; ++i){
        scanf(" %d", &gota);
        array[i] = gota;
    }

    resultado[1] = array[1]-1 > f - array[r] ? array[1]-1 : f - array[r];

    for (int i = 2; i<r; ++i){
        dist1 = (array[i]- array[i-1])/2;
        dist2 = (array[i+1]- array[i])/2;
        resultado[i] = dist1 > dist2 ? dist1 : dist2;
    }

    for(int i = 1; i<=r; ++i)
        if (maior < resultado[i]) 
            maior = resultado[i];

    printf("%d\n", maior);

    return 0;
}
