#include<cstdio>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 101;

int map[maxn][maxn];

typedef long long int huge;

int main(){
    int n, xi, xf, yi, yf, c=0;

    scanf(" %d", &n);

    for(int i = 0; i < maxn; ++i){
        for(int j = 0; j < maxn; ++j)
            map[i][j] = 0;
    }

    for(int i = 0; i<n; ++i){
        scanf(" %d %d %d %d", &xi, &xf, &yi, &yf);

        for(int j = xi; j<xf; ++j)
            for(int k = yi; k<yf; ++k)
                map[j][k] = 1;
    }

    for(int i = 0; i<maxn; ++i)
        for(int j = 0; j<maxn; ++j)
            if(map[i][j])
                c++;

    printf("%d\n", c);


    return 0;
}
