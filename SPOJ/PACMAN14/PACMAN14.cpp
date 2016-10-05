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
const int maxn = 101;

int mtx[maxn][maxn];

typedef long long int huge;

int main(){

    int n, max_v, cur_v;
    char aux;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<n; ++j)
            mtx[i][j] = 0;

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<n; ++j){
            scanf(" %c", &aux);
            if(aux == 'o')
                mtx[i][j] = 1;
            else if(aux == 'A')
                mtx[i][j] = -1;
        }

    //for(int i = 0; i<n; ++i){
        //for(int j = 0; j<n; ++j)
            //printf("%d ", mtx[i][j]);
        //printf("\n");
    //}

    cur_v = max_v = 0;
    for(int i = 0; i<n; ++i)

        if(!(i&1)){
            for(int j = 0; j<n; ++j)
                if(mtx[i][j] == 1){
                    ++cur_v;
                    if(cur_v > max_v)
                        max_v = cur_v;
                }
                else if(mtx[i][j] == -1)
                    cur_v = 0;
        }
        else
            for(int j = n-1; j>=0; --j)
                if(mtx[i][j] == 1){
                    ++cur_v;
                    if(cur_v > max_v)
                        max_v = cur_v;
                }
                else if(mtx[i][j] == -1)
                    cur_v = 0;

    printf("%d\n", max(max_v, cur_v));

    return 0;
}
