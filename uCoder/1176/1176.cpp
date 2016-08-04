#include<cstdio>

int main(){
    int n, m, a, b;
    char mtx[50][50];

    while(true){
        scanf(" %d %d", &n, &m);
        if(n==0) break;

        for(int i = 0; i<n; ++i)
            for (int j = 0; j<m; ++j)
                scanf(" %c", &mtx[i][j]);

        scanf(" %d %d", &a, &b);

        for(int i = 0; i<n; ++i)
            for( int k = 0, an = a/n; k<an; ++k){
                for (int j = 0; j<m; ++j)
                    for (int l = 0, bm = b/m; l<bm; ++l)
                        printf("%c", mtx[i][j]);
                printf("\n");
            }
        printf("\n");
    }

    return 0;
}
