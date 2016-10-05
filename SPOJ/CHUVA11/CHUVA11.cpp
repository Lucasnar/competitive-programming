#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<map>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 110; // 10 ^ 5

int mtx[maxn][maxn];

typedef long long int huge;

int main(){

    int n, aux;

    scanf("%d", &n);


    for(int i = 0; i<n; ++i)
        for(int j = 0; j<n; ++j)
            scanf("  %d", &mtx[i][j]);

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            scanf(" %d", &aux);
            if(j == n-1)
                printf("%d", mtx[i][j] + aux);
            else
                printf("%d ", mtx[i][j] + aux);
        }
        printf("\n");
    }

    return 0;
}
