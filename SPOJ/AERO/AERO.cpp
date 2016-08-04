#include<cstdio>

const int maxa = 110;
int array[maxa];

int main(){
    int a, v, x, y, maior, count=0;

    while(true){
        scanf(" %d %d", &a, &v);
        if (a == 0) break;

        for (int i = 1; i<=a; ++i)
            array[i] = 0;

        for(int i = 1; i<=v; ++i){
            scanf(" %d %d", &x, &y);
            array[x]++;
            array[y]++;
        }

        maior = -1;

        for (int i = 0; i<=a; ++i)
            if(array[i] > maior) maior = array[i];

        printf("Teste %d\n", ++count);
        for(int i=1; i<=a; ++i)
            if(array[i] == maior) printf("%d ", i);

        printf("\n\n");
    }      

    return 0;
}
