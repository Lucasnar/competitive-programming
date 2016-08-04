#include<cstdio>

const int maxn = 128;
int pessoas[maxn];

int main(){
    int n, tempo;

    while(true){

        scanf(" %d", &n);
        if(n==0) break;

        for (int i = 0; i<n; ++i)
            scanf(" %d", &pessoas[i]);

        tempo=10;
        for (int i = n-2; i>=0; --i)
            if (pessoas[i+1] - pessoas[i]>=10)
                tempo +=10;
            else
                tempo += pessoas[i+1]-pessoas[i];

        printf("%d\n", tempo);
    }

    return 0;
}
