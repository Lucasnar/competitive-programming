#include<cstdio>

const int maxn = 1000000;
int array[maxn];

int main(){
    int n, soma,c=0;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i)
        scanf(" %d", &array[i]);

    for(int i = 0; i<n; ++i){
        if(!(array[i] % 8))
            c++;
        soma=array[i];
        for(int j = i+1; j<n; ++j){
            soma += array[j];
            if (!(soma % 8))
                c++;
        }
    }
    printf("%d\n", c);

    return 0;
}
