#include<cstdio>

int main(){
    int m, r;

    scanf(" %d", &m);

    r = m % 54 == 0 ? m/54 : m/54 + 1;
    printf("%d %d\n", r, r*80); 

    return 0;
}
