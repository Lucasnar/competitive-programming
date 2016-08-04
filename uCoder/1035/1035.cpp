#include<cstdio>

int main(){
    int n, m;
    int pinos[1024];
    int resp=0;

    scanf(" %d %d", &n, &m);

    for (int i = 0; i< n; ++i)
        scanf(" %d", &pinos[i]);

    for (int i = 0; i< n-1; ++i)
        if(pinos[i] > m){
            resp += pinos[i] - m;
            pinos[i+1] -= pinos[i] - m;
        }
        else if (pinos[i] < m){
            resp += m-pinos[i];
            pinos[i+1] += m-pinos[i];
        }
    printf("%d\n", resp);

    return 0;
}
