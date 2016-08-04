#include<cstdio>

const int maxn = 10010;
int array[maxn];
int n;

int pintar_para_tras(int i){
    int dist_atual;
    for (int k = i-1; k>0; --k){
        dist_atual = i-k < 9 ? i-k : 9;
        if (array[k] && (array[k] == -1 || array[k] > dist_atual))
            array[k] = dist_atual;
        else
            break;
    }
}

int pintar_para_frente(int i){
    int dist_atual;
    for (int k = i+1; k<=n; ++k){
        dist_atual = k-i < 9 ? k-i : 9;
        if (array[k] && (array[k] == -1 || array[k] > dist_atual))
            array[k] = dist_atual;
        else
            break;
    }
}

int main(){
    scanf(" %d", &n);

    for (int i = 1; i<=n; ++i)
        scanf(" %d", &array[i]);

    for (int i = 1; i<=n ; ++i)
        if(!array[i]){
            pintar_para_tras(i);
            pintar_para_frente(i);
        }

    for (int i = 1; i<n; ++i)
        printf("%d ", array[i]);
    printf("%d\n", array[n]);

    return 0;
}
