#include<cstdio>
const int maxn = 100;
int array[maxn];
int array_r[maxn];

int main(){
    int n, marca;

    scanf(" %d", &n);

    for (int i = 0; i<n; ++i) {
        scanf(" %d", &marca);
        array[i]=marca;
    }
    for (int i = 0; i<n; ++i)
        array_r[i]=0;
    
    for (int i = 0; i<n; ++i){
        if (i!=0 && array[i-1] == 1) array_r[i]++;
        if (array[i] == 1) array_r[i]++;
        if (i!=n && array[i+1] == 1) array_r[i]++;
    }

    for (int i = 0; i<n; ++i){
        printf("%d\n", array_r[i]);
    }

    return 0;
}
