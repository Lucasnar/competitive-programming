#include<cstdio>
#include<cstdlib>

int cmp(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main(){
    int n[4];

    for (int i = 0; i<3; ++i)
        scanf("%d", &n[i]);

    qsort(n, 3, 4, cmp);

    for (int i = 0; i<3; ++i)
        printf("%d\n", n[i]);

    return 0;
}
