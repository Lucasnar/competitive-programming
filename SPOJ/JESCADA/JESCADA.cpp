#include<cstdio>

const int maxn = 1100;
int array[maxn];

int main(){
    int n, t, total=10;

    scanf(" %d", &n);

    int max = 10*n;
    int min = n == 0 ? 0 : 10+n-1;

    for(int i = 0; i<n; ++i){
        scanf(" %d", &t);
        array[i] = t;
    }

    for (int i = 1; i<n; ++i){
        if ((array[i]) < array[i-1]+10) total += array[i] - array[i-1];
        else total += 10;
    }

    printf("%d\n", total);

    return 0;
}
