#include<cstdio>

const int maxn = 100100;
int pai[maxn];
int rank[maxn];
int bancos[maxn];
int n, k;

int find(int a){
    if(pai[a] ==a) return a;
    pai[a] = find(pai[a]);
    return pai[a];
}

int make_union(int a, int b){
    int pai_a = find(a);
    int pai_b = find(b);
    if(rank[pai_a] > rank[pai_b]) pai[pai_b] = pai_a;
    else if(rank[pai_b] > rank[pai_a]) pai[pai_a] = pai_b;
    else pai[pai_b] = pai_a, rank[pai_a]++;
}

int main(){
    char f;
    int a, b;

    scanf(" %d %d", &n, &k);

    for(int i = 1; i<=n; ++i){
        pai[i] = i;
        rank[i] = 0;
    }

    for(int i = 1; i<=k; ++i){
        scanf(" %c", &f);
        scanf(" %d %d", &a, &b);

        if (f =='C'){
            if(find(a) == find(b)) printf("S\n");
            else printf("N\n");
        }
        else{
            make_union(a, b);
        }
    }
    return 0;
}
