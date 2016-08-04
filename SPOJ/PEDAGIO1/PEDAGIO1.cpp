#include<cstdio>

int main(){
    int l, d, k, p;
    int pedagios, total;

    scanf(" %d %d %d %d", &l, &d, &k, &p);

    pedagios = l / d;
    total = pedagios * p + l * k;
    
    printf("%d\n", total);

    return 0;
}
