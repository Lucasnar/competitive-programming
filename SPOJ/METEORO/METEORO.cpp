#include<cstdio>

int main(){
    int x1, x2, y1, y2, n, x, y, total, count;
    total = count = 0;
    
    while(true){
        scanf(" %d %d %d %d %d", &x1, &y1, &x2, &y2, &n);
        if (x1 == 0) break;

        total = 0;
        ++count;
        for (int i = 0; i<n; ++i){
            scanf(" %d %d", &x, &y);
            if (x >= x1 && x <= x2 && y <= y1 && y >= y2) ++total;
        }

        printf("Teste %d\n%d\n\n", count, total);
    }
    return 0;
}
