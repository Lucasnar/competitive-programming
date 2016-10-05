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
const int maxn = 10010; // 10 ^ 5

typedef long long int huge;

int main(){
    int n, x1, y1, x2, y2, cur_x1, cur_x2, cur_y1, cur_y2, c=0;
    while(1){
        scanf(" %d", &n);
        if(!n) break;

        printf("Teste %d\n", ++c);

        x1 = y2 = -maxn;
        x2 = y1 = maxn;

        for(;n--;){
            scanf(" %d %d %d %d", &cur_x1,&cur_y1,&cur_x2,&cur_y2);
            if(cur_x1 > x1)
                x1 = cur_x1;
            if(cur_y1 < y1)
                y1 = cur_y1;
            if(cur_x2 < x2)
                x2 = cur_x2;
            if(cur_y2 > y2)
                y2 = cur_y2;
        }

        if(x1 < x2 && y1 > y2)
            printf("%d %d %d %d\n\n", x1, y1, x2, y2);
        else
            printf("nenhum\n\n");
    }

    return 0;
}
