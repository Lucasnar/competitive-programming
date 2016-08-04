#include<cstdio>

int main(){
    int d, m, q, i, x, y, flag;

    while(true){
        scanf(" %d %d %d", &d, &m, &q); if (d == 0) break;
        flag=0;

        for (i = 0; i<q; ++i){
            scanf(" %d %d", &x, &y);
            if (x == d && y == m && !flag) { printf("S\n");flag = 1; }
        }

        if(!flag) printf("N\n");
    }


    return 0;
}
