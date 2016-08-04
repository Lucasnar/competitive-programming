#include<cstdio>

int main(){
    int n, max_heap, min_heap;
    int tree[32];


    while(scanf(" %d", &n) == 1){
        max_heap = min_heap = 1;

        for (int i =1; i<=n; ++i)
            scanf(" %d", &tree[i]);

        for (int i =2; i<=n; ++i)
            if (max_heap && tree[i/2] < tree[i])
                max_heap = 0;
            else if (min_heap && tree[i/2] > tree[i])
                min_heap = 0;
    
        max_heap ? printf("max") : min_heap ? printf("min") : printf("nada");
        printf("\n");
    }
    return 0;
}
