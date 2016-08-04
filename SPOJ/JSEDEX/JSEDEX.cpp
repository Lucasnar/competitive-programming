#include<cstdio>

int main(){
    int n;
    int a, l, p;

    scanf(" %d %d %d %d", &n, &a, &l, &p);

    if (a < n || l < n || p < n) printf("N\n");
    else printf("S\n");

    return 0;
}
