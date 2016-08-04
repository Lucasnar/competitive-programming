#include<cstdio>

int main(){
    int p, m;

    scanf(" %d %d", &p, &m);

    printf ("%d\n", (p - m) * 4 < 0 ? 0 : (p - m) * 4);
    return 0;
}
