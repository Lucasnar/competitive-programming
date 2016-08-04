#include<cstdio>

int main(){
    int n;
    int fatoriais[10];

    scanf(" %d", &n);

    fatoriais[0] = 1;
    for(int i = 1; i<=8; ++i)
        fatoriais[i] = fatoriais[i-1] * i;
    
    //for(int i = 0; i<8; ++i)
        //printf("%d ", fatoriais[i]);
    //printf("\n");

    int aux=0;
    for(int i = 8; i>=1;--i){
        if(n>=fatoriais[i]){
            aux += n/fatoriais[i];
            n %= fatoriais[i];
        }
    }

    printf("%d\n", aux);

    return 0;
}
