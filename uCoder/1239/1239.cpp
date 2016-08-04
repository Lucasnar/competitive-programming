#include<cstdio>
#include<algorithm>

struct apresentacao{
    int a, b;
};

#define maxn 1000100
apresentacao apresentacoes[maxn];

inline int cmp(apresentacao a1, apresentacao a2){
    return a1.b < a2.b;
}

int main(){
    int n, c, k;

    while(scanf(" %d", &n) == 1){
        for(int i = 0; i<n; ++i)
            scanf(" %d %d", &apresentacoes[i].a, &apresentacoes[i].b);

        std::sort(apresentacoes, apresentacoes+n, cmp);

        //for(int i = 0; i<n; ++i)
            ////printf(" %d %d\n", apresentacoes[i].a, apresentacoes[i].b);
        //printf("\n");


        c=1, k=0;
        for(int i = 1; i<n; ++i){
            if (apresentacoes[i].a >= apresentacoes[k].b)
                c++, k=i;

        }

        printf("%d\n", c);

    }

    return 0;
}
