#include<cstdio>

const int maxn = 1010;
int perguntas[maxn];
int marcado[maxn];
int k, m;

int adicionar_pergunta(int j){
    int c=0;
    for(int i =0 ;i<m; ++i)
        if (perguntas[i] == j)
            ++c, marcado[i] = 1;

    if (c >= k) return 1;
    return 0;

}

int main(){
    int t, c;

    scanf(" %d", &t);

    while(t--){
        scanf(" %d %d", &m, &k);

        for(int i =0 ;i<m; ++i)
            scanf(" %d", &perguntas[i]), marcado[i]=0;

        c=0;
        for(int i =0 ;i<m; ++i)
            if (!marcado[i])
                c += adicionar_pergunta(perguntas[i]);

        printf("%d\n", c);

    }

    return 0;
}
