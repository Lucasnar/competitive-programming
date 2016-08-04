#include<cstdio>

int main(){

    int a,b,c,m=-1,sm=-1;
    int vet[3];

    scanf(" %d", &vet[0]);
    scanf(" %d", &vet[1]);
    scanf(" %d", &vet[2]);

    for (int i=0; i<3; i++){
        if(vet[i] > m){
            sm = m;
            m = vet[i];
        }
        else if(vet[i] > sm){
            sm = vet[i];
        }
    }

    printf("%d\n", sm);

    return 0;
}
