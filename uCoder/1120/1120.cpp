#include<cstdio>

const int maxn = 100010;
int n, anterior;

struct peca{
    int e;
    char c;
    int d;
};

struct peca quebra[maxn];
char montado[maxn];

char achar_proximo(int d){
    for (int i = 0; i<n; ++i)
        if(quebra[i].e == d){
            anterior = quebra[i].d;
            return quebra[i].c;
        }
}

int main(){
    scanf(" %d", &n);

    for (int i=0;i<n;++i)
        scanf(" %d %c %d", &quebra[i].e, &quebra[i].c, &quebra[i].d);

    //for (int i=1;i<=n;++i)
        //printf("%d %c %d\n", quebra[i].e, quebra[i].c, quebra[i].d);

    anterior = 0;
    for (int i = 0; i<n; ++i)
            montado[i]=achar_proximo(anterior);

    for (int i=0;i<n;++i)
        printf("%c", montado[i]);
    printf("\n");

    return 0;
}
