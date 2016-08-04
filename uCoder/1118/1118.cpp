#include<cstdio>
#include<algorithm>

const int maxn = 100001;
int pastas[maxn];

int main(){
    int n, b;

    scanf(" %d %d", &n, &b);
    //int pastas[n+1];

    for(int i = 0; i<n; ++i)
        scanf(" %d", &pastas[i]);

    std::sort(pastas, pastas+n);

    //for(int i = 0; i<n; ++i)
        //printf("%d ", pastas[i]);

    int c=0;
    for(int j = n-1, i = 0; j>=i; --j){
        c++;
        //printf("i %d j %d\n", i, j);
        if (pastas[i] + pastas[j] <= b)
            ++i;
    }

    printf("%d\n", c);

    return 0;
}
